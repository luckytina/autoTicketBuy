/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *usernameLab;
    QLineEdit *userNameVal;
    QLabel *passwdLab;
    QLineEdit *passwdVal;
    QLabel *loginRCLab;
    QLabel *loginRCimg;
    QLineEdit *loginRCVal;
    QPushButton *startButton;
    QPushButton *topButton;
    QLabel *startStationLab;
    QLineEdit *startStationVal;
    QLabel *endStationLab;
    QLineEdit *endStationVal;
    QLabel *trainDateLab;
    QDateEdit *trainDateVal;
    QLabel *passengerBuyLab;
    QLineEdit *passengerBuyVal;
    QLabel *label;
    QLabel *trainNumListLab;
    QLineEdit *trainNumListVal;
    QLabel *label_2;
    QLabel *seatListLab;
    QLineEdit *seatListVal;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QLabel *ticketIntervalVal;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *ticketRCimg;
    QLineEdit *ticketRCVal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(768, 638);
        MainWindow->setMaximumSize(QSize(768, 638));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        usernameLab = new QLabel(centralWidget);
        usernameLab->setObjectName(QStringLiteral("usernameLab"));
        usernameLab->setGeometry(QRect(10, 20, 51, 21));
        userNameVal = new QLineEdit(centralWidget);
        userNameVal->setObjectName(QStringLiteral("userNameVal"));
        userNameVal->setGeometry(QRect(70, 20, 113, 20));
        passwdLab = new QLabel(centralWidget);
        passwdLab->setObjectName(QStringLiteral("passwdLab"));
        passwdLab->setGeometry(QRect(190, 20, 31, 21));
        passwdVal = new QLineEdit(centralWidget);
        passwdVal->setObjectName(QStringLiteral("passwdVal"));
        passwdVal->setGeometry(QRect(220, 20, 151, 20));
        loginRCLab = new QLabel(centralWidget);
        loginRCLab->setObjectName(QStringLiteral("loginRCLab"));
        loginRCLab->setGeometry(QRect(30, 190, 61, 21));
        loginRCimg = new QLabel(centralWidget);
        loginRCimg->setObjectName(QStringLiteral("loginRCimg"));
        loginRCimg->setGeometry(QRect(100, 180, 91, 41));
        loginRCVal = new QLineEdit(centralWidget);
        loginRCVal->setObjectName(QStringLiteral("loginRCVal"));
        loginRCVal->setGeometry(QRect(210, 190, 41, 20));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(540, 190, 75, 23));
        topButton = new QPushButton(centralWidget);
        topButton->setObjectName(QStringLiteral("topButton"));
        topButton->setGeometry(QRect(640, 190, 75, 23));
        startStationLab = new QLabel(centralWidget);
        startStationLab->setObjectName(QStringLiteral("startStationLab"));
        startStationLab->setGeometry(QRect(10, 60, 51, 21));
        startStationVal = new QLineEdit(centralWidget);
        startStationVal->setObjectName(QStringLiteral("startStationVal"));
        startStationVal->setGeometry(QRect(70, 60, 71, 20));
        endStationLab = new QLabel(centralWidget);
        endStationLab->setObjectName(QStringLiteral("endStationLab"));
        endStationLab->setGeometry(QRect(150, 60, 51, 21));
        endStationVal = new QLineEdit(centralWidget);
        endStationVal->setObjectName(QStringLiteral("endStationVal"));
        endStationVal->setGeometry(QRect(210, 60, 71, 20));
        trainDateLab = new QLabel(centralWidget);
        trainDateLab->setObjectName(QStringLiteral("trainDateLab"));
        trainDateLab->setGeometry(QRect(290, 60, 61, 21));
        trainDateVal = new QDateEdit(centralWidget);
        trainDateVal->setObjectName(QStringLiteral("trainDateVal"));
        trainDateVal->setGeometry(QRect(360, 60, 110, 22));
        passengerBuyLab = new QLabel(centralWidget);
        passengerBuyLab->setObjectName(QStringLiteral("passengerBuyLab"));
        passengerBuyLab->setGeometry(QRect(10, 90, 51, 21));
        passengerBuyVal = new QLineEdit(centralWidget);
        passengerBuyVal->setObjectName(QStringLiteral("passengerBuyVal"));
        passengerBuyVal->setGeometry(QRect(70, 90, 501, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 90, 151, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font.setItalic(false);
        label->setFont(font);
        trainNumListLab = new QLabel(centralWidget);
        trainNumListLab->setObjectName(QStringLiteral("trainNumListLab"));
        trainNumListLab->setGeometry(QRect(20, 120, 31, 21));
        trainNumListVal = new QLineEdit(centralWidget);
        trainNumListVal->setObjectName(QStringLiteral("trainNumListVal"));
        trainNumListVal->setGeometry(QRect(70, 120, 501, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 120, 151, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        label_2->setFont(font1);
        seatListLab = new QLabel(centralWidget);
        seatListLab->setObjectName(QStringLiteral("seatListLab"));
        seatListLab->setGeometry(QRect(20, 150, 31, 21));
        seatListVal = new QLineEdit(centralWidget);
        seatListVal->setObjectName(QStringLiteral("seatListVal"));
        seatListVal->setGeometry(QRect(70, 150, 501, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 150, 151, 21));
        label_3->setFont(font1);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 240, 721, 341));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(573, 20, 61, 21));
        ticketIntervalVal = new QLabel(centralWidget);
        ticketIntervalVal->setObjectName(QStringLiteral("ticketIntervalVal"));
        ticketIntervalVal->setGeometry(QRect(630, 20, 54, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(690, 20, 21, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 190, 61, 21));
        ticketRCimg = new QLabel(centralWidget);
        ticketRCimg->setObjectName(QStringLiteral("ticketRCimg"));
        ticketRCimg->setGeometry(QRect(350, 180, 81, 41));
        ticketRCVal = new QLineEdit(centralWidget);
        ticketRCVal->setObjectName(QStringLiteral("ticketRCVal"));
        ticketRCVal->setGeometry(QRect(450, 190, 41, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 768, 18));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "12306\346\212\242\347\245\250V0.1", 0));
        usernameLab->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", 0));
        passwdLab->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", 0));
        loginRCLab->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\351\252\214\350\257\201\347\240\201", 0));
        loginRCimg->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\212\242\347\245\250", 0));
        topButton->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\212\242\347\245\250", 0));
        startStationLab->setText(QApplication::translate("MainWindow", "\350\265\267\345\247\213\347\253\231", 0));
        endStationLab->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", 0));
        trainDateLab->setText(QApplication::translate("MainWindow", "\350\264\255\344\271\260\346\227\245\346\234\237", 0));
        passengerBuyLab->setText(QApplication::translate("MainWindow", "\350\264\255\347\245\250\344\272\272", 0));
        label->setText(QApplication::translate("MainWindow", "\346\263\250\357\274\232\350\257\267\347\224\250;\345\210\206\345\211\262\350\201\224\347\263\273\344\272\272", 0));
        trainNumListLab->setText(QApplication::translate("MainWindow", "\350\275\246\346\254\241", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\250\357\274\232\350\257\267\347\224\250;\345\210\206\345\211\262\350\275\246\346\254\241", 0));
        seatListLab->setText(QApplication::translate("MainWindow", "\345\270\255\344\275\215", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\263\250\357\274\232\350\257\267\347\224\250;\345\210\206\345\211\262\345\270\255\344\275\215", 0));
#ifndef QT_NO_TOOLTIP
        textBrowser->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "\346\212\242\347\245\250\351\227\264\351\232\224", 0));
        ticketIntervalVal->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "ms", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225\351\252\214\350\257\201\347\240\201", 0));
        ticketRCimg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
