/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_all;
    QLabel *label;
    QPushButton *pushButton_switch;
    QComboBox *comboBox_com;
    QComboBox *comboBox_baudreate;
    QLabel *label_3;
    QGroupBox *groupBox_ch4;
    QLabel *label_11;
    QLineEdit *lineEdit_ch4_title;
    QGroupBox *groupBox_ch3;
    QLabel *label_9;
    QLineEdit *lineEdit_ch3_title;
    QGroupBox *groupBox_ch2;
    QLabel *label_7;
    QLineEdit *lineEdit_ch2_title;
    QGroupBox *groupBox_ch1;
    QLabel *label_1;
    QLineEdit *lineEdit_ch1_title;
    QWidget *widget;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 568);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_all = new QGroupBox(centralWidget);
        groupBox_all->setObjectName(QStringLiteral("groupBox_all"));
        groupBox_all->setGeometry(QRect(80, 410, 716, 72));
        label = new QLabel(groupBox_all);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 16, 31, 16));
        pushButton_switch = new QPushButton(groupBox_all);
        pushButton_switch->setObjectName(QStringLiteral("pushButton_switch"));
        pushButton_switch->setGeometry(QRect(634, 8, 75, 58));
        comboBox_com = new QComboBox(groupBox_all);
        comboBox_com->setObjectName(QStringLiteral("comboBox_com"));
        comboBox_com->setGeometry(QRect(568, 11, 61, 22));
        comboBox_com->setMouseTracking(false);
        comboBox_com->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_baudreate = new QComboBox(groupBox_all);
        comboBox_baudreate->setObjectName(QStringLiteral("comboBox_baudreate"));
        comboBox_baudreate->setGeometry(QRect(568, 41, 61, 22));
        label_3 = new QLabel(groupBox_all);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(528, 44, 41, 16));
        groupBox_ch4 = new QGroupBox(groupBox_all);
        groupBox_ch4->setObjectName(QStringLiteral("groupBox_ch4"));
        groupBox_ch4->setGeometry(QRect(390, 10, 131, 66));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_ch4->sizePolicy().hasHeightForWidth());
        groupBox_ch4->setSizePolicy(sizePolicy);
        label_11 = new QLabel(groupBox_ch4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 30, 31, 16));
        lineEdit_ch4_title = new QLineEdit(groupBox_ch4);
        lineEdit_ch4_title->setObjectName(QStringLiteral("lineEdit_ch4_title"));
        lineEdit_ch4_title->setGeometry(QRect(20, 30, 61, 20));
        groupBox_ch3 = new QGroupBox(groupBox_all);
        groupBox_ch3->setObjectName(QStringLiteral("groupBox_ch3"));
        groupBox_ch3->setGeometry(QRect(260, 10, 131, 66));
        sizePolicy.setHeightForWidth(groupBox_ch3->sizePolicy().hasHeightForWidth());
        groupBox_ch3->setSizePolicy(sizePolicy);
        label_9 = new QLabel(groupBox_ch3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 30, 31, 16));
        lineEdit_ch3_title = new QLineEdit(groupBox_ch3);
        lineEdit_ch3_title->setObjectName(QStringLiteral("lineEdit_ch3_title"));
        lineEdit_ch3_title->setGeometry(QRect(20, 30, 61, 20));
        groupBox_ch2 = new QGroupBox(groupBox_all);
        groupBox_ch2->setObjectName(QStringLiteral("groupBox_ch2"));
        groupBox_ch2->setGeometry(QRect(130, 10, 131, 66));
        sizePolicy.setHeightForWidth(groupBox_ch2->sizePolicy().hasHeightForWidth());
        groupBox_ch2->setSizePolicy(sizePolicy);
        label_7 = new QLabel(groupBox_ch2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 30, 31, 16));
        lineEdit_ch2_title = new QLineEdit(groupBox_ch2);
        lineEdit_ch2_title->setObjectName(QStringLiteral("lineEdit_ch2_title"));
        lineEdit_ch2_title->setGeometry(QRect(10, 30, 61, 20));
        groupBox_ch1 = new QGroupBox(groupBox_all);
        groupBox_ch1->setObjectName(QStringLiteral("groupBox_ch1"));
        groupBox_ch1->setGeometry(QRect(0, 10, 131, 66));
        sizePolicy.setHeightForWidth(groupBox_ch1->sizePolicy().hasHeightForWidth());
        groupBox_ch1->setSizePolicy(sizePolicy);
        label_1 = new QLabel(groupBox_ch1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(80, 30, 31, 16));
        lineEdit_ch1_title = new QLineEdit(groupBox_ch1);
        lineEdit_ch1_title->setObjectName(QStringLiteral("lineEdit_ch1_title"));
        lineEdit_ch1_title->setGeometry(QRect(10, 30, 61, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(530, 20, 300, 150));
        widget->setMinimumSize(QSize(0, 150));
        widget->setMaximumSize(QSize(300, 150));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 180, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_all->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_switch->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", Q_NULLPTR));
        comboBox_com->clear();
        comboBox_com->insertItems(0, QStringList()
         << QString()
        );
#ifndef QT_NO_WHATSTHIS
        comboBox_com->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        comboBox_baudreate->clear();
        comboBox_baudreate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        groupBox_ch4->setTitle(QApplication::translate("MainWindow", "\345\244\207\347\224\250", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\215", Q_NULLPTR));
        lineEdit_ch4_title->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_ch3->setTitle(QApplication::translate("MainWindow", "\347\224\265\351\207\217", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        lineEdit_ch3_title->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_ch2->setTitle(QApplication::translate("MainWindow", "\351\200\237\345\272\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "m/s", Q_NULLPTR));
        lineEdit_ch2_title->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_ch1->setTitle(QApplication::translate("MainWindow", "\346\270\251\345\272\246", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\345\272\246", Q_NULLPTR));
        lineEdit_ch1_title->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\346\233\262\347\272\277", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
