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
quint32 origin_point_box_h_1 = CURVE_BOX_START_H;
quint32 origin_point_box_h_2 = CURVE_BOX_START_H + CURVE_BOX_2_OFFSET + CURVE_BOX_HEIGTH;

quint32 origin_point_box_w_1 = CURVE_BOX_START_W;
quint32 origin_point_box_w_2 = CURVE_BOX_START_W;
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
    for(int i = 0; i < LINE_NUM; i++)
    {
        battle_line[i] = new QPoint;
        path[i] = new QPainterPath;
    }
    ui->battleBar_3->setStyleSheet("QProgressBar::chunk { background-color: rgb(255, 0, 0) }");
    ui->battleBar_4->setStyleSheet("QProgressBar::chunk { background-color: rgb(255, 0, 0) }");
    ui->battleBar_5->setStyleSheet("QProgressBar::chunk { background-color: rgb(255, 0, 0) }");
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
            message.setText(tr("open serial port error !"));
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
    if(g_uart_rec_pkg.update_flag && g_uart_rec_pkg.length > 0)
    {
        g_uart_rec_pkg.update_flag = 0;
        if(g_uart_rec_pkg.length > 0 && 0 == g_uart_rec_pkg.data[g_uart_rec_pkg.length])
        {
            switch(g_uart_rec_pkg.id)
            {
                case TEMPERATURE:
                    on_temperature_cmd();
                    break;
                case SPEED:
                    on_speed_cmd();
                    break;
                case VOLTAGE:
                    on_voltage_cmd();
                    break;
                default:
                    on_undefine_cmd();
                    break;
             }
        }else
        {
            qDebug("receive a error packet");
        }
    }
    this->update();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    return QMainWindow::eventFilter(obj,event);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPoint originPointBox1(origin_point_box_w_1, origin_point_box_h_1);
    //QPoint originPointBox2(origin_point_box_w_2, origin_point_box_h_2);
    painter.translate(originPointBox1);  //adjust the origin point of the painting

    for(int i = 0; i < LINE_NUM; i++)
    {
        switch(i)
        {
            case 0:
                painter.setPen(QPen(Qt::red, 2)); //adjust the painter size and color
                break;
            case 1:
                painter.setPen(QPen(Qt::green, 2)); //adjust the painter size and color
                break;
            case 2:
                painter.setPen(QPen(Qt::blue, 2)); //adjust the painter size and color
                break;
            case 3:
                painter.setPen(QPen(Qt::yellow, 2)); //adjust the painter size and color
                break;
           default:
                break;
        }
        painter.drawPath(*path[i]);  //painting
    }
    draw_background();
}

void MainWindow::draw_background(void)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black,2));//设置画笔形式
    //curve_1
    painter.drawRect(CURVE_BOX_START_W, CURVE_BOX_START_H, (CURVE_BOX_WIDTH + 2), (CURVE_BOX_HEIGTH + 2));

    //curve_2
    painter.drawRect(CURVE_BOX_START_W, (CURVE_BOX_START_H + CURVE_BOX_HEIGTH + CURVE_BOX_2_OFFSET), (CURVE_BOX_WIDTH + 2), (CURVE_BOX_HEIGTH + 2));
}

void MainWindow::on_temperature_cmd(void)
{
   // ui->tem_box->setValue(g_uart_rec_pkg.data[0]);
}

void MainWindow::on_speed_cmd(void)
{
   // ui->power_box->setValue(g_uart_rec_pkg.data[0]);
}

void MainWindow::on_voltage_cmd(void)
{
    static quint32 x_index = 0;
    static quint32 y_index[LINE_NUM] = {0};

    //显示各个电池电压
    show_battle_info();
    //显示曲线
    x_index += PER_STEP_POINT;

    //line 1
    y_index[0] = g_uart_rec_pkg.data[0] + CURVE_BOX_START_H;

    //line 2
    y_index[1] = g_uart_rec_pkg.data[1] + CURVE_BOX_START_H;

    //line 3
    y_index[2] = g_uart_rec_pkg.data[1] + CURVE_BOX_START_H;

    for(int i = 0; i < LINE_NUM; i++)
    {
        if(y_index[i] > CURVE_BOX_HEIGTH)
        {
            y_index[i] = CURVE_BOX_HEIGTH;
        }
        y_index[i] = CURVE_BOX_HEIGTH - y_index[i]; //change graph direct
    }



    for(int i = 0; i < 2; i++)
    {
        battle_line[i]->setX(x_index);
        battle_line[i]->setY(y_index[i]);
        path[i]->lineTo(*battle_line[i]);
    }

    for(int i = 2; i < LINE_NUM; i++)
    {
        battle_line[i]->setX(x_index);
        battle_line[i]->setY(y_index[i] + (CURVE_BOX_HEIGTH + CURVE_BOX_2_OFFSET));
        path[i]->lineTo(*battle_line[i]);
    }

    if(x_index > CURVE_BOX_START_W + CURVE_BOX_WIDTH)
    {
        origin_point_box_w_1 -= PER_STEP_POINT;
        //origin_point_box_w_2 -= PER_STEP_POINT;
    }

}

void MainWindow::on_undefine_cmd(void)
{
    ui->other_box->setValue(g_uart_rec_pkg.data[0]);
}

void MainWindow::show_battle_info(void)
{
    //sum info show
    //ui->voltage_box->setValue(power_resi_avg);
    ui->power_box->setValue(g_uart_rec_pkg.data[0]*g_uart_rec_pkg.data[1]);
    ui->tem_box->setValue(g_uart_rec_pkg.data[5]);

    //battle 1
    ui->bta_1_V->setValue(g_uart_rec_pkg.data[0]/50.0);
    ui->bta_1_A->setValue(g_uart_rec_pkg.data[1]);
    ui->battleBar_1->setValue(g_uart_rec_pkg.data[2]);
    if(1 == g_uart_rec_pkg.data[3])
    {
        ui->battleBar_5->setStyleSheet("QProgressBar::chunk { background-color: rgb(255, 0, 0) }");
    }else
    {
        ui->battleBar_5->setStyleSheet("QProgressBar::chunk { background-color: rgb(0, 255, 0) }");
    }

    if(1 == g_uart_rec_pkg.data[4])
    {
        ui->battleBar_5->setStyleSheet("QProgressBar::chunk { background-color: rgb(0, 0, 255) }");
    }else
    {
        ui->battleBar_5->setStyleSheet("QProgressBar::chunk { background-color: rgb(0, 255, 0) }");
    }

    //ui->bta_1_C->setValue(g_uart_rec_pkg.data[2]);
    //ui->bta_1_W->setValue(g_uart_rec_pkg.data[0]*g_uart_rec_pkg.data[1]);

}
