/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *page_1;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_17;
    QLabel *label_11;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_11;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_16;
    QWidget *page_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1154, 821);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-150, -70, 1771, 1131));
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(70, 166, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(870, 80, 171, 41));
        label->setStyleSheet(QString::fromUtf8("font-size:40px;\n"
"color:black;\n"
"font-weight:bold;\n"
"font-style:italic;"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 130, 601, 531));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/niss.jpg);\n"
"background-repeat:no-repeat;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(820, 610, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"Viner Hand ITC\";\n"
"border-radius:10px;\n"
"background-color: rgb(90, 239, 255);"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1180, 580, 111, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 22pt \"Viner Hand ITC\";\n"
"background-color: rgb(85, 85, 127);\n"
"border-style:double;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 170, 191, 201));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/image/ayan.jpg);"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1130, 360, 201, 211));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/image/ayan.jpg);\n"
"background-repeat:no-repeat;"));
        stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label_5 = new QLabel(page_1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(520, 110, 451, 301));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg2.png);\n"
"background-repeat:no-repeat;"));
        pushButton_3 = new QPushButton(page_1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1030, 440, 141, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(8, 127, 101);"));
        pushButton_4 = new QPushButton(page_1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(670, 520, 151, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(8, 127, 101);"));
        pushButton_5 = new QPushButton(page_1);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(359, 590, 131, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(8, 127, 101);"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 100, 20);"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1140, 129, 91, 31));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 37, 0);"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1140, 540, 81, 31));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 24, 0);"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1170, 580, 71, 41));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_17 = new QPushButton(page_2);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(400, 230, 41, 61));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1190, 170, 71, 41));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayoutWidget = new QWidget(page_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(690, 100, 431, 271));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(horizontalLayoutWidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout->addWidget(pushButton_14);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_12 = new QPushButton(horizontalLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_10 = new QPushButton(horizontalLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout->addWidget(pushButton_10);

        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(680, 520, 431, 321));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_8->setObjectName("pushButton_8");

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_13 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout_2->addWidget(pushButton_13);

        pushButton_15 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        horizontalLayout_2->addWidget(pushButton_15);

        pushButton_11 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_11->setObjectName("pushButton_11");

        horizontalLayout_2->addWidget(pushButton_11);

        horizontalLayoutWidget_3 = new QWidget(page_2);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(840, 380, 131, 111));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_18->setObjectName("pushButton_18");

        horizontalLayout_3->addWidget(pushButton_18);

        pushButton_16 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_16->setObjectName("pushButton_16");

        horizontalLayout_3->addWidget(pushButton_16);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1154, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ronda", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Jouer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "sortie", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "HARD", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "MEDIUM", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "EASY", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "   player 1 score :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", " player 2 score:", nullptr));
        label_10->setText(QString());
        pushButton_17->setText(QString());
        label_11->setText(QString());
        pushButton_14->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_12->setText(QString());
        pushButton_10->setText(QString());
        pushButton_9->setText(QString());
        pushButton_8->setText(QString());
        pushButton_13->setText(QString());
        pushButton_15->setText(QString());
        pushButton_11->setText(QString());
        pushButton_18->setText(QString());
        pushButton_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
