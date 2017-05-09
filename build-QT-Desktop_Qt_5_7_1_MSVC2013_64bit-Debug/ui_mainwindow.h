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
    QLabel *label_2;
    QProgressBar *battleBar_1;
    QProgressBar *battleBar_2;
    QProgressBar *battleBar_3;
    QProgressBar *battleBar_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *label_22;
    QSpinBox *bta_1_V;
    QSpinBox *bta_1_A;
    QSpinBox *bta_1_W;
    QSpinBox *bta_1_C;
    QLabel *label_23;
    QSpinBox *bta_2_V;
    QLabel *label_24;
    QSpinBox *bta_2_W;
    QLabel *label_25;
    QLabel *label_26;
    QSpinBox *bta_2_A;
    QSpinBox *bta_2_C;
    QLabel *label_27;
    QSpinBox *bta_3_V;
    QLabel *label_28;
    QSpinBox *bta_3_W;
    QLabel *label_29;
    QLabel *label_30;
    QSpinBox *bta_3_A;
    QSpinBox *bta_3_C;
    QLabel *label_31;
    QSpinBox *bta_4_V;
    QLabel *label_32;
    QSpinBox *bta_4_W;
    QLabel *label_33;
    QLabel *label_34;
    QSpinBox *bta_4_A;
    QSpinBox *bta_4_C;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 552);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QStringLiteral("font-color:rgb(255, 0, 127)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_all = new QGroupBox(centralWidget);
        groupBox_all->setObjectName(QStringLiteral("groupBox_all"));
        groupBox_all->setGeometry(QRect(10, 400, 641, 72));
        label = new QLabel(groupBox_all);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 20, 31, 16));
        pushButton_switch = new QPushButton(groupBox_all);
        pushButton_switch->setObjectName(QStringLiteral("pushButton_switch"));
        pushButton_switch->setGeometry(QRect(560, 7, 75, 61));
        comboBox_com = new QComboBox(groupBox_all);
        comboBox_com->setObjectName(QStringLiteral("comboBox_com"));
        comboBox_com->setGeometry(QRect(490, 11, 61, 21));
        comboBox_com->setMouseTracking(false);
        comboBox_com->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_baudreate = new QComboBox(groupBox_all);
        comboBox_baudreate->setObjectName(QStringLiteral("comboBox_baudreate"));
        comboBox_baudreate->setGeometry(QRect(490, 40, 61, 22));
        label_3 = new QLabel(groupBox_all);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 40, 41, 16));
        groupBox_ch4 = new QGroupBox(groupBox_all);
        groupBox_ch4->setObjectName(QStringLiteral("groupBox_ch4"));
        groupBox_ch4->setGeometry(QRect(330, 0, 111, 66));
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
        groupBox_ch3->setGeometry(QRect(220, 0, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch3->sizePolicy().hasHeightForWidth());
        groupBox_ch3->setSizePolicy(sizePolicy);
        label_9 = new QLabel(groupBox_ch3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 30, 31, 16));
        voltage_box = new QSpinBox(groupBox_ch3);
        voltage_box->setObjectName(QStringLiteral("voltage_box"));
        voltage_box->setGeometry(QRect(10, 30, 51, 22));
        voltage_box->setMaximum(9999);
        groupBox_ch2 = new QGroupBox(groupBox_all);
        groupBox_ch2->setObjectName(QStringLiteral("groupBox_ch2"));
        groupBox_ch2->setGeometry(QRect(110, 0, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch2->sizePolicy().hasHeightForWidth());
        groupBox_ch2->setSizePolicy(sizePolicy);
        label_7 = new QLabel(groupBox_ch2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 30, 31, 16));
        power_box = new QSpinBox(groupBox_ch2);
        power_box->setObjectName(QStringLiteral("power_box"));
        power_box->setGeometry(QRect(10, 30, 51, 22));
        power_box->setMaximum(9999);
        groupBox_ch1 = new QGroupBox(groupBox_all);
        groupBox_ch1->setObjectName(QStringLiteral("groupBox_ch1"));
        groupBox_ch1->setGeometry(QRect(0, 0, 111, 66));
        sizePolicy.setHeightForWidth(groupBox_ch1->sizePolicy().hasHeightForWidth());
        groupBox_ch1->setSizePolicy(sizePolicy);
        label_1 = new QLabel(groupBox_ch1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(70, 30, 31, 16));
        tem_box = new QSpinBox(groupBox_ch1);
        tem_box->setObjectName(QStringLiteral("tem_box"));
        tem_box->setGeometry(QRect(10, 30, 51, 22));
        tem_box->setMaximum(9999);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 380, 54, 12));
        battleBar_1 = new QProgressBar(centralWidget);
        battleBar_1->setObjectName(QStringLiteral("battleBar_1"));
        battleBar_1->setGeometry(QRect(700, 10, 181, 51));
        battleBar_1->setValue(24);
        battleBar_2 = new QProgressBar(centralWidget);
        battleBar_2->setObjectName(QStringLiteral("battleBar_2"));
        battleBar_2->setGeometry(QRect(700, 130, 181, 51));
        battleBar_2->setValue(24);
        battleBar_3 = new QProgressBar(centralWidget);
        battleBar_3->setObjectName(QStringLiteral("battleBar_3"));
        battleBar_3->setGeometry(QRect(700, 250, 181, 51));
        battleBar_3->setValue(24);
        battleBar_4 = new QProgressBar(centralWidget);
        battleBar_4->setObjectName(QStringLiteral("battleBar_4"));
        battleBar_4->setGeometry(QRect(700, 380, 181, 51));
        battleBar_4->setValue(24);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(860, 80, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(850, 210, 54, 12));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(850, 330, 54, 12));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(850, 450, 54, 12));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 380, 41, 16));
        label_10->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 380, 41, 16));
        label_12->setStyleSheet(QStringLiteral("color:red"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(160, 380, 41, 16));
        label_13->setStyleSheet(QStringLiteral("color:green"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 380, 41, 16));
        label_14->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(500, 380, 41, 16));
        label_15->setStyleSheet(QStringLiteral("color:blue"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(460, 380, 41, 16));
        label_16->setStyleSheet(QStringLiteral(""));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(590, 376, 41, 20));
        label_19->setStyleSheet(QStringLiteral("color:yellow"));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(550, 380, 41, 16));
        label_20->setStyleSheet(QStringLiteral(""));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(750, 70, 16, 16));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(820, 70, 16, 16));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(750, 100, 16, 16));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(820, 100, 21, 16));
        bta_1_V = new QSpinBox(centralWidget);
        bta_1_V->setObjectName(QStringLiteral("bta_1_V"));
        bta_1_V->setGeometry(QRect(700, 70, 42, 22));
        bta_1_V->setMaximum(999);
        bta_1_A = new QSpinBox(centralWidget);
        bta_1_A->setObjectName(QStringLiteral("bta_1_A"));
        bta_1_A->setGeometry(QRect(770, 70, 42, 22));
        bta_1_A->setMaximum(999);
        bta_1_W = new QSpinBox(centralWidget);
        bta_1_W->setObjectName(QStringLiteral("bta_1_W"));
        bta_1_W->setGeometry(QRect(700, 100, 42, 22));
        bta_1_W->setMaximum(999);
        bta_1_C = new QSpinBox(centralWidget);
        bta_1_C->setObjectName(QStringLiteral("bta_1_C"));
        bta_1_C->setGeometry(QRect(770, 100, 42, 22));
        bta_1_C->setMaximum(999);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(820, 220, 21, 16));
        bta_2_V = new QSpinBox(centralWidget);
        bta_2_V->setObjectName(QStringLiteral("bta_2_V"));
        bta_2_V->setGeometry(QRect(700, 190, 42, 22));
        bta_2_V->setMaximum(999);
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(750, 190, 16, 16));
        bta_2_W = new QSpinBox(centralWidget);
        bta_2_W->setObjectName(QStringLiteral("bta_2_W"));
        bta_2_W->setGeometry(QRect(700, 220, 42, 22));
        bta_2_W->setMaximum(999);
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(750, 220, 16, 16));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(820, 190, 16, 16));
        bta_2_A = new QSpinBox(centralWidget);
        bta_2_A->setObjectName(QStringLiteral("bta_2_A"));
        bta_2_A->setGeometry(QRect(770, 190, 42, 22));
        bta_2_A->setMaximum(999);
        bta_2_C = new QSpinBox(centralWidget);
        bta_2_C->setObjectName(QStringLiteral("bta_2_C"));
        bta_2_C->setGeometry(QRect(770, 220, 42, 22));
        bta_2_C->setMaximum(999);
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(820, 350, 21, 16));
        bta_3_V = new QSpinBox(centralWidget);
        bta_3_V->setObjectName(QStringLiteral("bta_3_V"));
        bta_3_V->setGeometry(QRect(700, 320, 42, 22));
        bta_3_V->setMaximum(999);
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(750, 320, 16, 16));
        bta_3_W = new QSpinBox(centralWidget);
        bta_3_W->setObjectName(QStringLiteral("bta_3_W"));
        bta_3_W->setGeometry(QRect(700, 350, 42, 22));
        bta_3_W->setMaximum(999);
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(750, 350, 16, 16));
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(820, 320, 16, 16));
        bta_3_A = new QSpinBox(centralWidget);
        bta_3_A->setObjectName(QStringLiteral("bta_3_A"));
        bta_3_A->setGeometry(QRect(770, 320, 42, 22));
        bta_3_A->setMaximum(999);
        bta_3_C = new QSpinBox(centralWidget);
        bta_3_C->setObjectName(QStringLiteral("bta_3_C"));
        bta_3_C->setGeometry(QRect(770, 350, 42, 22));
        bta_3_C->setMaximum(999);
        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(820, 470, 21, 16));
        bta_4_V = new QSpinBox(centralWidget);
        bta_4_V->setObjectName(QStringLiteral("bta_4_V"));
        bta_4_V->setGeometry(QRect(700, 440, 42, 22));
        bta_4_V->setMaximum(999);
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(750, 440, 16, 16));
        bta_4_W = new QSpinBox(centralWidget);
        bta_4_W->setObjectName(QStringLiteral("bta_4_W"));
        bta_4_W->setGeometry(QRect(700, 470, 42, 22));
        bta_4_W->setMaximum(999);
        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(750, 470, 16, 16));
        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(820, 440, 16, 16));
        bta_4_A = new QSpinBox(centralWidget);
        bta_4_A->setObjectName(QStringLiteral("bta_4_A"));
        bta_4_A->setGeometry(QRect(770, 440, 42, 22));
        bta_4_A->setMaximum(999);
        bta_4_C = new QSpinBox(centralWidget);
        bta_4_C->setObjectName(QStringLiteral("bta_4_C"));
        bta_4_C->setGeometry(QRect(770, 470, 42, 22));
        bta_4_C->setMaximum(999);
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
        groupBox_ch4->setTitle(QApplication::translate("MainWindow", "\345\205\266\344\273\226", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\215\225\344\275\215", Q_NULLPTR));
        groupBox_ch3->setTitle(QApplication::translate("MainWindow", "\346\200\273\347\224\265\351\207\217", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        groupBox_ch2->setTitle(QApplication::translate("MainWindow", "\346\200\273\345\212\237\347\216\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        groupBox_ch1->setTitle(QApplication::translate("MainWindow", "\345\271\263\345\235\207\346\270\251\345\272\246", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\345\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213\346\233\262\347\272\277", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\344\270\200", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\344\272\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\344\270\211", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\240\345\233\233", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\2401:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\2402:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\2403:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "-------", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\347\224\265\346\261\2404:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
