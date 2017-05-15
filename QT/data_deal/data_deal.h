#ifndef DATA_DEAL_H
#define DATA_DEAL_H

#include <QObject>
#include <QTimer>
#include "qextserialport/win_qextserialport.h"
#include <QStringList>
#include <QThread>
#include <QMutex>


class data_protocol;
typedef struct
{
    char update_flag;       //receive a new buff
    unsigned char id;       //cmd_id
    unsigned char length;   //value data length
    unsigned char data[256];         //data
}uart_rec_packet;

typedef struct
{
    int voltage;
    int current;
    float power_rate;
    float temperature;
    char soc;
    bool battle_status;
}battle_info;

typedef enum{
    key_type,
    value_type
}key_or_value;

typedef enum{
    TEMPERATURE = 0,
    SPEED,
    VOLTAGE,
    CMD_ID_NUM,
}CMD_ID;

class thread_def:public QThread
{
    Q_OBJECT
public:
    thread_def(int tim,QObject *protocal);
    void run();
    void start_thread(){run_flag=true;}
    void stop_thread(){run_flag=false;}
    QMutex *mutex;
private:
    data_protocol* serial_commu_ptr;
    int run_flag;
    int sleep_time;
signals:
    void time_out();
};

class data_protocol:QObject
{
    Q_OBJECT
public:
    data_protocol();
    ~data_protocol();
    qint16 get_data(quint32 index,quint8 ch);
    QStringList com_ports;
    QStringList com_names;

    QString current_com;
    BaudRateType current_baudrate;

    friend class thread_def;

    int com_ports_num;

    quint16 CRC_CHECK(quint8 *Buf, quint8 CRC_CNT);
    qint16  check_buf_end(quint8 *Buf, quint16 buf_size);
    bool is_open()
    {
        return serial_port->isOpen();
    }

    bool open()
    {
        bool ret=serial_port->open(QextSerialBase::ReadWrite);
        if(ret)
        {
            serial_port->setDataBits(DATA_8);
            serial_port->setParity(PAR_NONE);
            serial_port->setStopBits(STOP_1);
            serial_port->setFlowControl(FLOW_OFF);
            serial_port->setTimeout(10);

            data_recv_thread->start_thread();
        }
        return ret;
    }

    void close()
    {
        data_recv_thread->stop_thread();
        serial_port->close();
    }

    void set_com(QString _com)
    {
        current_com=_com;
        serial_port->setPortName(current_com);
    }

    void set_baudrate(BaudRateType baud)
    {
        current_baudrate=baud;
        serial_port->setBaudRate(current_baudrate);
    }

    quint32 data_frame_ready()
    {
        quint32 tmp;
        data_recv_thread->mutex->lock();
        tmp=dealt_buf_pos;
        data_recv_thread->mutex->unlock();
        return tmp;
    }

private:
    QByteArray org_data_buf;
    quint32 dealt_buf_pos;
    Win_QextSerialPort *serial_port;

    thread_def * data_recv_thread;

    int scan_com();
    QString read_reg_com(quint32 index,key_or_value kv);

public slots:
    void read_com_data();
};


#endif // DATA_DEAL_H














