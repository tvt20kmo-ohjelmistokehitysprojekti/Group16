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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnShowBooks;
    QTextEdit *txtBooks;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnAddBook;
    QLineEdit *addIsbn;
    QLineEdit *addName;
    QLineEdit *addAuthor;
    QLabel *labelInfo;
    QLabel *label_5;
    QLineEdit *deleteId;
    QLabel *label_6;
    QPushButton *btnDeleteBook;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *updateName;
    QLabel *label_9;
    QLineEdit *updateAuthor;
    QLineEdit *updateId;
    QPushButton *btnUpdateBook;
    QLineEdit *updateIsbn;
    QLabel *label_11;
    QLineEdit *lineEditUsername;
    QLabel *label_10;
    QLabel *label_12;
    QPushButton *btnLogin;
    QLabel *labelLoginTest;
    QLabel *label_13;
    QLineEdit *lineEditPassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnShowBooks = new QPushButton(centralwidget);
        btnShowBooks->setObjectName(QString::fromUtf8("btnShowBooks"));
        btnShowBooks->setGeometry(QRect(10, 30, 231, 41));
        QFont font;
        font.setPointSize(12);
        btnShowBooks->setFont(font);
        txtBooks = new QTextEdit(centralwidget);
        txtBooks->setObjectName(QString::fromUtf8("txtBooks"));
        txtBooks->setGeometry(QRect(10, 80, 231, 141));
        txtBooks->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 40, 191, 31));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 140, 47, 13));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 80, 47, 13));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 110, 47, 13));
        label_4->setFont(font);
        btnAddBook = new QPushButton(centralwidget);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));
        btnAddBook->setGeometry(QRect(310, 180, 150, 30));
        btnAddBook->setFont(font);
        addIsbn = new QLineEdit(centralwidget);
        addIsbn->setObjectName(QString::fromUtf8("addIsbn"));
        addIsbn->setGeometry(QRect(310, 140, 150, 25));
        addIsbn->setFont(font);
        addName = new QLineEdit(centralwidget);
        addName->setObjectName(QString::fromUtf8("addName"));
        addName->setGeometry(QRect(310, 80, 150, 25));
        addName->setFont(font);
        addAuthor = new QLineEdit(centralwidget);
        addAuthor->setObjectName(QString::fromUtf8("addAuthor"));
        addAuthor->setGeometry(QRect(310, 110, 150, 25));
        addAuthor->setFont(font);
        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(570, 490, 211, 31));
        labelInfo->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(570, 290, 131, 31));
        label_5->setFont(font);
        deleteId = new QLineEdit(centralwidget);
        deleteId->setObjectName(QString::fromUtf8("deleteId"));
        deleteId->setGeometry(QRect(640, 330, 60, 25));
        deleteId->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(606, 333, 21, 20));
        label_6->setFont(font);
        btnDeleteBook = new QPushButton(centralwidget);
        btnDeleteBook->setObjectName(QString::fromUtf8("btnDeleteBook"));
        btnDeleteBook->setGeometry(QRect(580, 370, 121, 31));
        btnDeleteBook->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(510, 40, 191, 31));
        label_7->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(520, 110, 47, 13));
        label_8->setFont(font);
        updateName = new QLineEdit(centralwidget);
        updateName->setObjectName(QString::fromUtf8("updateName"));
        updateName->setGeometry(QRect(580, 80, 150, 25));
        updateName->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(520, 80, 47, 13));
        label_9->setFont(font);
        updateAuthor = new QLineEdit(centralwidget);
        updateAuthor->setObjectName(QString::fromUtf8("updateAuthor"));
        updateAuthor->setGeometry(QRect(580, 110, 150, 25));
        updateAuthor->setFont(font);
        updateId = new QLineEdit(centralwidget);
        updateId->setObjectName(QString::fromUtf8("updateId"));
        updateId->setGeometry(QRect(640, 40, 60, 25));
        updateId->setFont(font);
        btnUpdateBook = new QPushButton(centralwidget);
        btnUpdateBook->setObjectName(QString::fromUtf8("btnUpdateBook"));
        btnUpdateBook->setGeometry(QRect(580, 180, 150, 30));
        btnUpdateBook->setFont(font);
        updateIsbn = new QLineEdit(centralwidget);
        updateIsbn->setObjectName(QString::fromUtf8("updateIsbn"));
        updateIsbn->setGeometry(QRect(580, 140, 150, 25));
        updateIsbn->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(520, 140, 47, 13));
        label_11->setFont(font);
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(210, 340, 101, 25));
        lineEditUsername->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 300, 131, 31));
        label_10->setFont(font);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(116, 343, 71, 20));
        label_12->setFont(font);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(210, 410, 101, 31));
        btnLogin->setFont(font);
        labelLoginTest = new QLabel(centralwidget);
        labelLoginTest->setObjectName(QString::fromUtf8("labelLoginTest"));
        labelLoginTest->setGeometry(QRect(100, 470, 231, 31));
        labelLoginTest->setFont(font);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(119, 370, 81, 20));
        label_13->setFont(font);
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(210, 370, 101, 25));
        lineEditPassword->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnShowBooks->setText(QCoreApplication::translate("MainWindow", "Show Books", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Add new book", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "isbn", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "author", nullptr));
        btnAddBook->setText(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        labelInfo->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Delete book", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        btnDeleteBook->setText(QCoreApplication::translate("MainWindow", "Delete Book", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Update Book ID=", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "author", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        btnUpdateBook->setText(QCoreApplication::translate("MainWindow", "Update Book", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "isbn", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Login test", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "username", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        labelLoginTest->setText(QCoreApplication::translate("MainWindow", "Login Result", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
