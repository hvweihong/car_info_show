#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGroupBox>
#include "data_deal/data_deal.h"
#include <QSettings>
#include <QThread>

#define CURVE_BOX_WIDTH     350
#define CURVE_BOX_HEIGTH    200
#define CURVE_BOX_2_OFFSET  20
#define CURVE_BOX_START_W   0
#define CURVE_BOX_START_H   15
#define PER_STEP_POINT      2
#define LINE_NUM            3
#define VOLTAGE_OFFSET      300


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void resizeEvent(QResizeEvent * event);
    void closeEvent(QCloseEvent *);
    bool eventFilter(QObject *obj, QEvent *event);
    void paintEvent(QPaintEvent *event);
    void draw_background(void);
    void on_temperature_cmd(void);
    void on_speed_cmd(void);
    void on_voltage_cmd(void);
    void on_undefine_cmd(void);
    void show_battle_info(battle_info *m_battle_info);

private slots:
    void on_pushButton_switch_clicked();
    void on_comboBox_baudreate_currentIndexChanged(int index);

private:

    int current_key;

    Ui::MainWindow *ui;
    data_protocol *serial_commmu;
    QSettings *setting;
    QTimer *update_timer;
    QPoint *battle_line[LINE_NUM];
    QPainterPath *path[LINE_NUM];

private slots:
    void graph_update();
};

#endif // MAINWINDOW_H
