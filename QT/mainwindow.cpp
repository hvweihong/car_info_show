#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QResizeEvent>
#include <QDebug>
#include <QEvent>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QMessageBox>
#include <QTextCodec>
#include <QFile>
#include <QDir>
#include <QScrollBar>
#include <QLinkedList>
#include <QPainter>
#include <QTimer>
#include <QPainterPath>
#include <QTime>

BaudRateType baud_array[]={BAUD9600,BAUD19200,BAUD38400,BAUD57600,BAUD115200};
static quint32 p = 0;
extern uart_rec_packet g_uart_rec_pkg;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    current_key=0;
    serial_commmu = new data_protocol();

    if(serial_commmu->com_ports_num!=0)
    {
        ui->comboBox_com->clear();
        for(int i=0;i<serial_commmu->com_ports_num;i++)
        {
            ui->comboBox_com->addItem(serial_commmu->com_ports.at(i));
        }
    }

    update_timer= new QTimer(this);
    path = new QPainterPath;
    point = new QPoint;
    connect(update_timer,SIGNAL(timeout()),this,SLOT(graph_update()));

    QDir dir;
    dir.setPath(dir.current().path()+QString("/setting.ini"));
    if(dir.exists(dir.path()))
    {
        setting = new QSettings(dir.path(),QSettings::IniFormat);
        setting->sync();
        int i = serial_commmu->com_ports.indexOf(setting->value(QString("com_port")).toString());
        if(i>-1)
        {
            ui->comboBox_com->setCurrentIndex(i);
        }
        ui->comboBox_baudreate->setCurrentIndex(setting->value(QString("baudrate")).toInt());
    }
    else
    {
        setting = new QSettings(dir.path(),QSettings::IniFormat);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent * event)
{
    QRect rect = QRect(QPoint(0,0),event->size());
    rect.adjust(0,0,0,-118);

    QRect rect_tmp = ui->groupBox_all->geometry();
    rect_tmp.setTop(event->size().height()-112);
    rect_tmp.setBottom(event->size().height()-42);
    ui->groupBox_all->setGeometry(rect_tmp);
}


void MainWindow::on_pushButton_switch_clicked()
{
    if(ui->pushButton_switch->text()==tr("启动"))
    {
        serial_commmu->set_com(ui->comboBox_com->currentText());
        if(serial_commmu->open()==false)
        {
            QMessageBox message;
            message.setText(tr("open serial error !"));
            message.show();
            return;
        }
        update_timer->start(100);
        ui->pushButton_switch->setText(tr("停止"));
        serial_commmu->set_baudrate(baud_array[ui->comboBox_baudreate->currentIndex()]);
        ui->comboBox_com->setEnabled(false);
        setting->setValue(QString("com_port"),ui->comboBox_com->currentText());
        setting->sync();
    }
    else if(ui->pushButton_switch->text()==tr("停止"))
    {
        ui->pushButton_switch->setText(tr("启动"));
        if(serial_commmu->is_open())
        {
            serial_commmu->close();
        }
        update_timer->stop();
        ui->comboBox_com->setEnabled(true);
    }
}

void MainWindow::on_comboBox_baudreate_currentIndexChanged(int index)
{
    serial_commmu->set_baudrate(baud_array[index]);
    setting->setValue(QString("baudrate"),index);
    setting->sync();
}


void MainWindow::closeEvent(QCloseEvent *)
{
    serial_commmu->close();
    setting->setValue(QString("com_port"),ui->comboBox_com->currentText());

    setting->setValue(QString("baudrate"),ui->comboBox_baudreate->currentIndex());
    setting->sync();
}

void MainWindow::graph_update()
{
    static quint32 x_index = 0;
    char str_temp[64];
    QString str = "";
    if(g_uart_rec_pkg.update_flag && g_uart_rec_pkg.length > 0)
    {
        g_uart_rec_pkg.update_flag = 0;
        if(g_uart_rec_pkg.length > 0 && 0 == g_uart_rec_pkg.data[g_uart_rec_pkg.length])
        {
            switch(g_uart_rec_pkg.id)
            {
                case TEMPERATURE:
                    x_index++;
                    sprintf(str_temp, "%d", g_uart_rec_pkg.data[0]);
                    str = str_temp;
                    ui->lineEdit_ch1_title->setText(str);
                    point->setX(x_index);
                    point->setY(g_uart_rec_pkg.data[0]);
                    path->lineTo(*point);
                    if(x_index > 300)
                    {
                        p--;
                    }
                    this->update();
                    break;
                case SPEED:
                    sprintf(str_temp, "%d", g_uart_rec_pkg.data[0]);
                    str = str_temp;
                    ui->lineEdit_ch2_title->setText(str);
                    break;
                case VOLTAGE:
                    sprintf(str_temp, "%d", g_uart_rec_pkg.data[0]);
                    str = str_temp;
                    ui->lineEdit_ch3_title->setText(str);
                    break;
                default:
                    sprintf(str_temp, "%d", g_uart_rec_pkg.data[0]);
                    str = str_temp;
                    ui->lineEdit_ch4_title->setText(str);
                    break;
             }
        }else
        {
            qDebug("receive a error packet");
        }
    }
//    for(;index+1<points;index++)
//    {
//        quint16 Y_value = serial_commmu->get_data(index,0);
//        char temp[64];
//        sprintf(temp, "%d", Y_value);
//        QString s(temp);
//        ui->lineEdit_ch1_title->setText(s);
//        if(Y_value > 200)
//        {
//            Y_value = 200;
//        }else if(Y_value < 0)
//        {
//            Y_value = 0;
//        }
//        point->setX(index);
//        point->setY(Y_value);
//        path->lineTo(*point);
//        if(index > 300)
//        {
//            p--;
//        }
//        this->update();
//    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    return QMainWindow::eventFilter(obj,event);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::red)); //adjust the painter size and color
    QPoint originPoint(p,0);
    painter.translate(originPoint);  //adjust the origin point of the painting
    painter.drawPath(*path);  //painting
}
