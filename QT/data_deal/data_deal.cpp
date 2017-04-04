#pragma comment (lib,"Advapi32.lib")
#include "data_deal.h"
#include "QString"
#include "qt_windows.h"
#include <QSettings>
#include <QStringList>
#include "winerror.h"
#include <QDebug>
#include <QWaitCondition>
#include "../mainwindow.h"
#include "../qextserialport/win_qextserialport.h"

#define UART_BUF_START 0Xaa
#define UART_BUF_END_1 0X0d
#define UART_BUF_END_2 0X0a
#define ENABLE_CRC 0
#define DEALT_DATA_BUF_SIZE (115200/10*3600/2)

QString tem;
uart_rec_packet g_uart_rec_pkg;

data_protocol::data_protocol()
{
    dealt_buf_pos=0;
    com_ports_num=scan_com();

    PortSettings set;
    set.BaudRate=BAUD9600;
    set.DataBits=DATA_8;
    set.Parity=PAR_NONE;
    set.StopBits=STOP_1;
    set.FlowControl=FLOW_OFF;
    set.Timeout_Millisec=20;

    serial_port = new Win_QextSerialPort(set,QextSerialBase::Polling);

    data_recv_thread = new thread_def(2,this);
    data_recv_thread->start(QThread::InheritPriority);

    current_com=QString("");
    current_baudrate=BAUD9600;
}

data_protocol::~data_protocol()
{
    delete serial_port;
    delete data_recv_thread;
}

qint16 data_protocol::get_data(quint32 index, quint8 ch)
{
    //return *((qint16*)(&dealt_data_buf[index])+(quint8)ch);
    return 0;
}

void data_protocol::read_com_data()
{

}

int data_protocol::scan_com()
{
    int i=0;
    while(i<100)
    {
        QString str_k=read_reg_com(i,key_type);
        QString str_v=read_reg_com(i,value_type);
        if(!str_k.isEmpty())
        {
            com_names.append(str_k);
        }
        else
            break;

        if(!str_v.isEmpty())
        {
            com_ports.append(str_v);
        }
        else
            break;
        i++;
    }

    if(i!=0)
    {
        QStringList ports=com_ports;
        QStringList names=com_names;
        com_ports.sort();
        com_names.clear();

        for(int j=0;j<i;j++)
        {
            com_names.append(names.at(ports.indexOf(com_ports.at(j))));
        }
    }
    return i;
}

QString data_protocol::read_reg_com(quint32 index,key_or_value kv)
{
    HKEY hKey;
    int name_size=0;
    int value_size=0;
    int type;
    CHAR name_buf[255];
    BYTE value_buf[255];
    QString ret;

    LPCSTR subkey="HARDWARE\\DEVICEMAP\\SERIALCOMM";

    name_size=sizeof(name_buf);
    value_size=sizeof(value_buf);

    if(::RegOpenKeyExA(HKEY_LOCAL_MACHINE,subkey,0,KEY_READ,&hKey))
    {
        return QString("");
    }

    //RegEnumValueA(HKEY,DWORD,LPSTR,PDWORD,PDWORD,PDWORD,LPBYTE,PDWORD);
    if(::RegEnumValueA(hKey,index,name_buf,(DWORD*)&name_size,0,(DWORD*)&type,value_buf,(DWORD*)&value_size)==0)//列举键名和值
    {
        if(kv==key_type)
            ret=QString(name_buf);
        if(kv==value_type)
            ret=QString((char*)value_buf);
    }
    else
        ret=QString("");
    ::RegCloseKey(hKey);//关闭注册表
    return ret;
}

quint16 data_protocol::CRC_CHECK(quint8 *Buf, quint8 CRC_CNT)
{
    quint16 CRC_Temp;
    quint8 i,j;
    CRC_Temp = 0xffff;

    for (i=0;i<CRC_CNT; i++){
        CRC_Temp ^= Buf[i];
        for (j=0;j<8;j++) {
            if (CRC_Temp & 0x01)
                CRC_Temp = (CRC_Temp >>1 ) ^ 0xa001;
            else
                CRC_Temp = CRC_Temp >> 1;
        }
    }
    return(CRC_Temp);
}

qint16 data_protocol::check_buf_end(quint8 *Buf, quint16 buf_size)
{
    for(int i = 0; i < (buf_size - 1); i++)
    {
        if(UART_BUF_END_1 == Buf[i])
        {
            if(UART_BUF_END_2 == Buf[i + 1])
            {
                return i;
            }
        }
    }
    return -1;
}

thread_def::thread_def(int tim, QObject *protocal)
{
    run_flag=false;
    sleep_time=tim;
    serial_commu_ptr=(data_protocol*)protocal;
    mutex = new QMutex();
}

void thread_def::run()
{
    QByteArray *buf=&serial_commu_ptr->org_data_buf;
    Win_QextSerialPort *com=serial_commu_ptr->serial_port;
    while(1)
    {
        msleep(5);
        if(run_flag)
        {
            if(serial_commu_ptr->is_open())
            {
                if(com->bytesAvailable()>0)
                {
                    buf->append(com->readAll());
                    while(buf->length() > 3)
                    {
                        //必须以0x0d 0x0a 结尾
                        int ret_size = serial_commu_ptr->check_buf_end((quint8*)buf->data(),buf->length());
                        qDebug() << "receive buf size"  << ret_size;
                        if(-1 != ret_size)
                        {
                            if(ret_size >= 2 )
                            {
                                if(ret_size < 256)
                                {
                                    memcpy(&g_uart_rec_pkg.id,buf->data(),ret_size);
                                    g_uart_rec_pkg.data[ret_size - 2] = 0;//最后一个字节设置为0
                                    g_uart_rec_pkg.update_flag = 1;
                                    qDebug("receive a pkg pkg_id:0x%02x", g_uart_rec_pkg.id);
                                }else
                                {
                                    qDebug() << "buff out of size ret_size:" << ret_size;
                                }
                                buf->remove(0,ret_size + 2);
                                mutex->lock();
                                serial_commu_ptr->dealt_buf_pos++;
                                mutex->unlock();
                                //qDebug()<<"OK"<<serial_commu_ptr->dealt_buf_pos;
                            }

                        }
                        else
                        {
                            qDebug() << "receice part of pack";
                        }
                    }
                }
            }
        }
    }
    exec();
}
