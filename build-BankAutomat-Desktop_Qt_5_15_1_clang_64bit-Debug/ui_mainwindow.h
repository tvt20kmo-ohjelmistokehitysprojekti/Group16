/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnSignIn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPin;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelSignIn;
    QPushButton *btnShowBooks;
    QTextEdit *txtBooks;
    QLabel *labelResult;
    QPushButton *btnSignIn_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnSignIn = new QPushButton(centralwidget);
        btnSignIn->setObjectName(QString::fromUtf8("btnSignIn"));
        btnSignIn->setGeometry(QRect(230, 340, 181, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 201, 21));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        lineEditUser = new QLineEdit(centralwidget);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setGeometry(QRect(340, 190, 171, 31));
        lineEditPin = new QLineEdit(centralwidget);
        lineEditPin->setObjectName(QString::fromUtf8("lineEditPin"));
        lineEditPin->setGeometry(QRect(340, 250, 171, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 190, 121, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 250, 121, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSignIn = new QLabel(centralwidget);
        labelSignIn->setObjectName(QString::fromUtf8("labelSignIn"));
        labelSignIn->setGeometry(QRect(470, 350, 91, 21));
        btnShowBooks = new QPushButton(centralwidget);
        btnShowBooks->setObjectName(QString::fromUtf8("btnShowBooks"));
        btnShowBooks->setGeometry(QRect(30, 200, 111, 41));
        txtBooks = new QTextEdit(centralwidget);
        txtBooks->setObjectName(QString::fromUtf8("txtBooks"));
        txtBooks->setGeometry(QRect(10, 250, 161, 131));
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(430, 350, 291, 31));
        btnSignIn_2 = new QPushButton(centralwidget);
        btnSignIn_2->setObjectName(QString::fromUtf8("btnSignIn_2"));
        btnSignIn_2->setGeometry(QRect(230, 390, 181, 41));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        btnSignIn->setText(QCoreApplication::translate("MainWindow", "Kirjaudu Sis\303\244\303\244n", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bank Automat", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tervetuloa Bank Automatiin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "K\303\244ytt\303\244j\303\244 Tunnus :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Pin-Koodi :", nullptr));
        labelSignIn->setText(QString());
        btnShowBooks->setText(QCoreApplication::translate("MainWindow", "Show Result", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "here", nullptr));
        btnSignIn_2->setText(QCoreApplication::translate("MainWindow", "MENU PAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
