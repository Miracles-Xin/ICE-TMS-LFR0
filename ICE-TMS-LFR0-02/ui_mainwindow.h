/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *serialSetting;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QCustomPlot *customPlot1;
    QCustomPlot *customPlot3;
    QCustomPlot *customPlot4;
    QCustomPlot *customPlot5;
    QCustomPlot *customPlot7;
    QCustomPlot *customPlot2;
    QCustomPlot *customPlot6;
    QCustomPlot *customPlot0;
    QWidget *title;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QProgressBar *pbBattery;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSerialSetting;
    QPushButton *pushButton;
    QPushButton *OpenSerialButton;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *ID;
    QLabel *label_7;
    QLabel *temp;
    QLabel *label_8;
    QLabel *voltage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 800);
        MainWindow->setMinimumSize(QSize(1500, 800));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	 background-color:rgb(33, 119, 184);\n"
"}"));
        serialSetting = new QAction(MainWindow);
        serialSetting->setObjectName(QString::fromUtf8("serialSetting"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(12);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setContentsMargins(10, -1, 10, -1);
        customPlot1 = new QCustomPlot(centralwidget);
        customPlot1->setObjectName(QString::fromUtf8("customPlot1"));
        customPlot1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customPlot1->sizePolicy().hasHeightForWidth());
        customPlot1->setSizePolicy(sizePolicy);
        customPlot1->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(customPlot1, 0, 1, 1, 1);

        customPlot3 = new QCustomPlot(centralwidget);
        customPlot3->setObjectName(QString::fromUtf8("customPlot3"));
        sizePolicy.setHeightForWidth(customPlot3->sizePolicy().hasHeightForWidth());
        customPlot3->setSizePolicy(sizePolicy);
        customPlot3->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(customPlot3, 0, 3, 1, 1);

        customPlot4 = new QCustomPlot(centralwidget);
        customPlot4->setObjectName(QString::fromUtf8("customPlot4"));
        sizePolicy.setHeightForWidth(customPlot4->sizePolicy().hasHeightForWidth());
        customPlot4->setSizePolicy(sizePolicy);
        customPlot4->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(customPlot4, 1, 0, 1, 1);

        customPlot5 = new QCustomPlot(centralwidget);
        customPlot5->setObjectName(QString::fromUtf8("customPlot5"));
        sizePolicy.setHeightForWidth(customPlot5->sizePolicy().hasHeightForWidth());
        customPlot5->setSizePolicy(sizePolicy);
        customPlot5->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(customPlot5, 1, 1, 1, 1);

        customPlot7 = new QCustomPlot(centralwidget);
        customPlot7->setObjectName(QString::fromUtf8("customPlot7"));
        sizePolicy.setHeightForWidth(customPlot7->sizePolicy().hasHeightForWidth());
        customPlot7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(customPlot7, 1, 3, 1, 1);

        customPlot2 = new QCustomPlot(centralwidget);
        customPlot2->setObjectName(QString::fromUtf8("customPlot2"));
        sizePolicy.setHeightForWidth(customPlot2->sizePolicy().hasHeightForWidth());
        customPlot2->setSizePolicy(sizePolicy);
        customPlot2->setMaximumSize(QSize(16777215, 16777215));
        customPlot2->setStyleSheet(QString::fromUtf8("QCustomPlot\n"
"{\n"
"	 background-color:rgb(33, 119, 184);\n"
"}"));

        gridLayout_3->addWidget(customPlot2, 0, 2, 1, 1);

        customPlot6 = new QCustomPlot(centralwidget);
        customPlot6->setObjectName(QString::fromUtf8("customPlot6"));
        sizePolicy.setHeightForWidth(customPlot6->sizePolicy().hasHeightForWidth());
        customPlot6->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(customPlot6, 1, 2, 1, 1);

        customPlot0 = new QCustomPlot(centralwidget);
        customPlot0->setObjectName(QString::fromUtf8("customPlot0"));
        sizePolicy.setHeightForWidth(customPlot0->sizePolicy().hasHeightForWidth());
        customPlot0->setSizePolicy(sizePolicy);
        customPlot0->setMaximumSize(QSize(16777215, 16777215));
        customPlot0->setStyleSheet(QString::fromUtf8("QCustomPlot\n"
"{\n"
"	 background-color:rgb(33, 119, 184);\n"
"}"));

        gridLayout_3->addWidget(customPlot0, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 6, 0, 1, 1);

        title = new QWidget(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
        title->setMinimumSize(QSize(0, 30));
        title->setMaximumSize(QSize(16777215, 30));
        title->setSizeIncrement(QSize(0, 32));
        title->setBaseSize(QSize(0, 30));
        title->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:rgb(211, 211, 211)\n"
"}"));

        gridLayout->addWidget(title, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pbBattery = new QProgressBar(centralwidget);
        pbBattery->setObjectName(QString::fromUtf8("pbBattery"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbBattery->sizePolicy().hasHeightForWidth());
        pbBattery->setSizePolicy(sizePolicy2);
        pbBattery->setMinimumSize(QSize(40, 0));
        pbBattery->setMaximumSize(QSize(60, 16777215));
        pbBattery->setStyleSheet(QString::fromUtf8(""));
        pbBattery->setValue(24);

        horizontalLayout->addWidget(pbBattery);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSerialSetting = new QPushButton(centralwidget);
        btnSerialSetting->setObjectName(QString::fromUtf8("btnSerialSetting"));
        btnSerialSetting->setMinimumSize(QSize(0, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        btnSerialSetting->setFont(font);
        btnSerialSetting->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius: 4px;\n"
"    background-color: rgb(85, 170, 255);/*\350\203\214\346\231\257\350\211\262*/\n"
"}"));

        horizontalLayout_3->addWidget(btnSerialSetting);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 27));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius: 4px;\n"
"    background-color: rgb(85, 170, 255);/*\350\203\214\346\231\257\350\211\262*/\n"
"}"));

        horizontalLayout_3->addWidget(pushButton);

        OpenSerialButton = new QPushButton(centralwidget);
        OpenSerialButton->setObjectName(QString::fromUtf8("OpenSerialButton"));
        OpenSerialButton->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(OpenSerialButton->sizePolicy().hasHeightForWidth());
        OpenSerialButton->setSizePolicy(sizePolicy3);
        OpenSerialButton->setMinimumSize(QSize(0, 27));
        OpenSerialButton->setMaximumSize(QSize(110, 40));
        OpenSerialButton->setFont(font);
        OpenSerialButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius: 4px;\n"
"    background-color: rgb(85, 170, 255);/*\350\203\214\346\231\257\350\211\262*/\n"
"}"));

        horizontalLayout_3->addWidget(OpenSerialButton);

        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        sizePolicy3.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy3);
        btnSave->setMinimumSize(QSize(0, 27));
        btnSave->setMaximumSize(QSize(110, 40));
        btnSave->setFont(font);
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    border-radius: 4px;\n"
"    background-color: rgb(85, 170, 255);/*\350\203\214\346\231\257\350\211\262*/\n"
"}"));

        horizontalLayout_3->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 10, -1, 10);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setMaximumSize(QSize(110, 40));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setTextFormat(Qt::AutoText);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_6);

        ID = new QLabel(centralwidget);
        ID->setObjectName(QString::fromUtf8("ID"));
        sizePolicy4.setHeightForWidth(ID->sizePolicy().hasHeightForWidth());
        ID->setSizePolicy(sizePolicy4);
        ID->setMaximumSize(QSize(110, 40));
        ID->setFont(font);

        horizontalLayout_4->addWidget(ID);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        label_7->setMaximumSize(QSize(110, 40));
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);

        temp = new QLabel(centralwidget);
        temp->setObjectName(QString::fromUtf8("temp"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(temp->sizePolicy().hasHeightForWidth());
        temp->setSizePolicy(sizePolicy6);
        temp->setMaximumSize(QSize(110, 40));
        temp->setFont(font);

        horizontalLayout_4->addWidget(temp);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);
        label_8->setMaximumSize(QSize(110, 40));
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        voltage = new QLabel(centralwidget);
        voltage->setObjectName(QString::fromUtf8("voltage"));
        sizePolicy6.setHeightForWidth(voltage->sizePolicy().hasHeightForWidth());
        voltage->setSizePolicy(sizePolicy6);
        voltage->setMaximumSize(QSize(110, 40));
        voltage->setFont(font);

        horizontalLayout_4->addWidget(voltage);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ICE-TMS-LFRO-02 ", nullptr));
        serialSetting->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnSerialSetting->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        pushButton->setText(QString());
        OpenSerialButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\260\345\275\225", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID\357\274\232", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\206\267\347\253\257\346\270\251\345\272\246\357\274\232", nullptr));
        temp->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\216\213\345\200\274\357\274\232", nullptr));
        voltage->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
