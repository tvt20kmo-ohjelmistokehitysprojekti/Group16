/********************************************************************************
** Form generated from reading UI file 'menuform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUFORM_H
#define UI_MENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuForm
{
public:
    QPushButton *btnSuljeMenu;
    QLabel *label;
    QPushButton *btnSiirto;
    QPushButton *btnSaldo;
    QPushButton *btnNosto;
    QPushButton *btnTapahtumat;
    QPushButton *btnTalletus;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QString::fromUtf8("MenuForm"));
        MenuForm->resize(600, 502);
        btnSuljeMenu = new QPushButton(MenuForm);
        btnSuljeMenu->setObjectName(QString::fromUtf8("btnSuljeMenu"));
        btnSuljeMenu->setGeometry(QRect(220, 390, 151, 51));
        label = new QLabel(MenuForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        btnSiirto = new QPushButton(MenuForm);
        btnSiirto->setObjectName(QString::fromUtf8("btnSiirto"));
        btnSiirto->setGeometry(QRect(310, 240, 261, 41));
        btnSaldo = new QPushButton(MenuForm);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(310, 180, 259, 41));
        btnNosto = new QPushButton(MenuForm);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setGeometry(QRect(30, 180, 259, 41));
        btnTapahtumat = new QPushButton(MenuForm);
        btnTapahtumat->setObjectName(QString::fromUtf8("btnTapahtumat"));
        btnTapahtumat->setGeometry(QRect(30, 300, 259, 41));
        btnTalletus = new QPushButton(MenuForm);
        btnTalletus->setObjectName(QString::fromUtf8("btnTalletus"));
        btnTalletus->setGeometry(QRect(30, 240, 259, 41));

        retranslateUi(MenuForm);

        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QCoreApplication::translate("MenuForm", "P\303\244\303\244valikko", nullptr));
        btnSuljeMenu->setText(QCoreApplication::translate("MenuForm", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MenuForm", "Bank Automat", nullptr));
        btnSiirto->setText(QCoreApplication::translate("MenuForm", "Siirto", nullptr));
        btnSaldo->setText(QCoreApplication::translate("MenuForm", "Saldo", nullptr));
        btnNosto->setText(QCoreApplication::translate("MenuForm", "Nosto", nullptr));
        btnTapahtumat->setText(QCoreApplication::translate("MenuForm", "Tapahtumat", nullptr));
        btnTalletus->setText(QCoreApplication::translate("MenuForm", "Talletus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUFORM_H
