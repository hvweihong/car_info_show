#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGroupBox>
#include "data_deal/data_deal.h"
#include <QSettings>
#include <QThread>

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

private slots:
    void on_pushButton_switch_clicked();
    void on_comboBox_baudreate_currentIndexChanged(int index);

private:

    int current_key;

    Ui::MainWindow *ui;
    data_protocol *serial_commmu;
    QSettings *setting;
    QTimer *update_timer;
    QPoint *point;
    QPainterPath *path;

private slots:
    void graph_update();
};

#endif // MAINWINDOW_H
