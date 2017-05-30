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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QSpinBox *other_box;
    QGroupBox *groupBox_ch3;
    QLabel *label_9;
    QSpinBox *voltage_box;
    QGroupBox *groupBox_ch2;
    QLabel *label_7;
    QSpinBox *power_box;
    QGroupBox *groupBox_ch1;
    QLabel *label_1;
    QSpinBox *tem_box;
    QProgressBar *battleBar_1;
    QProgressBar *battleBar_2;
    QProgressBar *battleBar_3;
    QProgressBar *battleBar_4;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *bta_1_V;
    QSpinBox *bta_1_A;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QProgressBar *battleBar_5;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_25;
    QLabel *label_26;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(836, 552);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QStringLiteral("font-color:rgb(255, 0, 127)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_all = new QGroupBox(centralWidget);
        groupBox_all->setObjectName(QStringLiteral("groupBox_all"));
        groupBox_all->setGeometry(QRect(10, 410, 761, 81));
        label = new QLabel(groupBox_all);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(570, 10, 41, 20));
        pushButton_switch = new QPushButton(groupBox_all);
        pushButton_switch->setObjectName(QStringLiteral("pushButton_switch"));
        pushButton_switch->setGeometry(QRect(680, 10, 75, 61));
        comboBox_com = new QComboBox(groupBox_all);
        comboBox_com->setObjectName(QStringLiteral("comboBox_com"));
        comboBox_com->setGeometry(QRect(610, 10, 61, 21));
        comboBox_com->setMouseTracking(false);
        comboBox_com->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_baudreate = new QComboBox(groupBox_all);
        comboBox_baudreate->setObjectName(QStringLiteral("comboBox_baudreate"));
        comboBox_baudreate->setGeometry(QRect(610, 50, 61, 22));
        label_3 = new QLabel(groupBox_all);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(570, 50, 41, 16));
        groupBox_ch4 = new QGroupBox(groupBox_all);
        groupBox_ch4->setObjectName(QStringLiteral("groupBox_ch4"));
        groupBox_ch4->setGeometry(QRect(440, 10, 111, 66));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_ch4->sizePolicy().hasHeightForWidth());
        groupBox_ch4->setSizePolicy(sizePolicy);
        label_11 = new QLabel(groupBox_ch4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 30, 31, 16));
        other_box = new QSpinBox(groupBox_ch4);
        other_box->setObjectName(QStringLiteral("other_box"));
        other_box->setGeometry(QRect(20, 30, 51, 22));
        other_box->setMaximum(9999);
        groupBox_ch3 = new QGroupBox(groupBox_all);
        groupBox_ch3->setObjectName(QStringLiteral("groupBox_ch3"));
        groupBox_ch3->setGeometry(QRect(290, 10, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch3->sizePolicy().hasHeightForWidth());
        groupBox_ch3->setSizePolicy(sizePolicy);
        label_9 = new QLabel(groupBox_ch3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 30, 31, 16));
        voltage_box = new QSpinBox(groupBox_ch3);
        voltage_box->setObjectName(QStringLiteral("voltage_box"));
        voltage_box->setGeometry(QRect(10, 30, 51, 22));
        voltage_box->setMaximum(9999);
        groupBox_ch2 = new QGroupBox(groupBox_all);
        groupBox_ch2->setObjectName(QStringLiteral("groupBox_ch2"));
        groupBox_ch2->setGeometry(QRect(150, 10, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch2->sizePolicy().hasHeightForWidth());
        groupBox_ch2->setSizePolicy(sizePolicy);
        label_7 = new QLabel(groupBox_ch2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 30, 31, 16));
        power_box = new QSpinBox(groupBox_ch2);
        power_box->setObjectName(QStringLiteral("power_box"));
        power_box->setGeometry(QRect(10, 30, 51, 22));
        power_box->setMaximum(9999);
        groupBox_ch1 = new QGroupBox(groupBox_all);
        groupBox_ch1->setObjectName(QStringLiteral("groupBox_ch1"));
        groupBox_ch1->setGeometry(QRect(0, 10, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch1->sizePolicy().hasHeightForWidth());
        groupBox_ch1->setSizePolicy(sizePolicy);
        label_1 = new QLabel(groupBox_ch1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(70, 30, 31, 16));
        tem_box = new QSpinBox(groupBox_ch1);
        tem_box->setObjectName(QStringLiteral("tem_box"));
        tem_box->setGeometry(QRect(10, 30, 51, 22));
        tem_box->setMaximum(9999);
        battleBar_1 = new QProgressBar(centralWidget);
        battleBar_1->setObjectName(QStringLiteral("battleBar_1"));
        battleBar_1->setGeometry(QRect(420, 30, 171, 51));
        battleBar_1->setStyleSheet(QStringLiteral(""));
        battleBar_1->setValue(95);
        battleBar_1->setTextVisible(true);
        battleBar_1->setOrientation(Qt::Horizontal);
        battleBar_2 = new QProgressBar(centralWidget);
        battleBar_2->setObjectName(QStringLiteral("battleBar_2"));
        battleBar_2->setGeometry(QRect(600, 30, 181, 51));
        battleBar_2->setMaximum(100);
        battleBar_2->setValue(80);
        battleBar_2->setOrientation(Qt::Horizontal);
        battleBar_3 = new QProgressBar(centralWidget);
        battleBar_3->setObjectName(QStringLiteral("battleBar_3"));
        battleBar_3->setGeometry(QRect(430, 220, 61, 51));
        battleBar_3->setValue(100);
        battleBar_3->setTextVisible(false);
        battleBar_3->setOrientation(Qt::Vertical);
        battleBar_4 = new QProgressBar(centralWidget);
        battleBar_4->setObjectName(QStringLiteral("battleBar_4"));
        battleBar_4->setGeometry(QRect(550, 220, 61, 51));
        battleBar_4->setValue(100);
        battleBar_4->setTextVisible(false);
        battleBar_4->setOrientation(Qt::Vertical);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(400, 340, 51, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(460, 340, 51, 21));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("color:red"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(600, 340, 51, 21));
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("color:green"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(540, 340, 51, 31));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(730, 340, 51, 21));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color:blue"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(670, 340, 51, 31));
        label_16->setFont(font);
        label_16->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(730, 130, 31, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(18);
        label_17->setFont(font1);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(540, 130, 31, 31));
        label_18->setFont(font1);
        bta_1_V = new QSpinBox(centralWidget);
        bta_1_V->setObjectName(QStringLiteral("bta_1_V"));
        bta_1_V->setGeometry(QRect(670, 130, 51, 31));
        bta_1_V->setMaximum(10000);
        bta_1_A = new QSpinBox(centralWidget);
        bta_1_A->setObjectName(QStringLiteral("bta_1_A"));
        bta_1_A->setGeometry(QRect(480, 130, 51, 31));
        bta_1_A->setFont(font1);
        bta_1_A->setMaximum(10000);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(420, 90, 151, 31));
        label_19->setFont(font);
        label_19->setStyleSheet(QStringLiteral(""));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(610, 90, 151, 31));
        label_20->setFont(font);
        label_20->setStyleSheet(QStringLiteral(""));
        label_35 = new QLabel(centralWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(410, 270, 111, 31));
        label_35->setFont(font);
        label_35->setStyleSheet(QStringLiteral(""));
        label_36 = new QLabel(centralWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(540, 270, 81, 31));
        label_36->setFont(font);
        label_36->setStyleSheet(QStringLiteral(""));
        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(640, 270, 151, 31));
        label_37->setFont(font);
        label_37->setStyleSheet(QStringLiteral(""));
        battleBar_5 = new QProgressBar(centralWidget);
        battleBar_5->setObjectName(QStringLiteral("battleBar_5"));
        battleBar_5->setGeometry(QRect(670, 220, 61, 51));
        battleBar_5->setValue(100);
        battleBar_5->setTextVisible(false);
        battleBar_5->setOrientation(Qt::Vertical);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(610, 130, 51, 31));
        label_23->setFont(font);
        label_23->setStyleSheet(QStringLiteral(""));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(420, 130, 51, 31));
        label_24->setFont(font);
        label_24->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 410, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 350, 41, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 290, 41, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 230, 41, 16));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(360, 70, 41, 16));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(360, 130, 41, 16));
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(360, 10, 41, 16));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(360, 190, 41, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 836, 23));
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
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
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
        groupBox_ch4->setTitle(QApplication::translate("MainWindow", "\345\205\266\344\273\226", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\215", Q_NULLPTR));
        groupBox_ch3->setTitle(QApplication::translate("MainWindow", "\345\211\251\344\275\231\351\207\214\347\250\213", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "KM", Q_NULLPTR));
        groupBox_ch2->setTitle(QApplication::translate("MainWindow", "\345\205\205\346\224\276\347\224\265\345\212\237\347\216\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        groupBox_ch1->setTitle(QApplication::translate("MainWindow", "\347\224\265\346\261\240\346\270\251\345\272\246", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\345\272\246", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\347\224\265\346\265\201", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\351\207\214\347\250\213", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "mv", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "ma", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "SOD/\346\267\261\345\272\246\346\224\276\347\224\265", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "SOC/\345\211\251\344\275\231\347\224\265\351\207\217", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\346\212\245\350\255\246", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "\345\205\205\346\224\276\347\224\265", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "SOH/\345\201\245\345\272\267\347\212\266\345\206\265", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "\347\224\265\346\265\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "0%", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "30%", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "60%", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "90%", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "120", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "60", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "180", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
