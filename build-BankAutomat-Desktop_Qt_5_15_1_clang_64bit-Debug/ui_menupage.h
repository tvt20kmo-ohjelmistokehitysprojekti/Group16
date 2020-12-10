/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPage
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btnOpenSaldo;
    QPushButton *btnOpenNosto;
    QPushButton *btnOpenSiirto;
    QPushButton *btnOpenTapahtumat;
    QPushButton *btnOpenTalletus;
    QLabel *label_2;
    QPushButton *btnCloseMenuPage;

    void setupUi(QWidget *MenuPage)
    {
        if (MenuPage->objectName().isEmpty())
            MenuPage->setObjectName(QString::fromUtf8("MenuPage"));
        MenuPage->resize(600, 429);
        gridLayoutWidget = new QWidget(MenuPage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 150, 391, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnOpenSaldo = new QPushButton(gridLayoutWidget);
        btnOpenSaldo->setObjectName(QString::fromUtf8("btnOpenSaldo"));

        gridLayout->addWidget(btnOpenSaldo, 1, 1, 1, 1);

        btnOpenNosto = new QPushButton(gridLayoutWidget);
        btnOpenNosto->setObjectName(QString::fromUtf8("btnOpenNosto"));
        btnOpenNosto->setAutoRepeat(false);

        gridLayout->addWidget(btnOpenNosto, 1, 0, 1, 1);

        btnOpenSiirto = new QPushButton(gridLayoutWidget);
        btnOpenSiirto->setObjectName(QString::fromUtf8("btnOpenSiirto"));

        gridLayout->addWidget(btnOpenSiirto, 3, 0, 1, 1);

        btnOpenTapahtumat = new QPushButton(gridLayoutWidget);
        btnOpenTapahtumat->setObjectName(QString::fromUtf8("btnOpenTapahtumat"));

        gridLayout->addWidget(btnOpenTapahtumat, 5, 0, 1, 1);

        btnOpenTalletus = new QPushButton(gridLayoutWidget);
        btnOpenTalletus->setObjectName(QString::fromUtf8("btnOpenTalletus"));

        gridLayout->addWidget(btnOpenTalletus, 3, 1, 1, 1);

        label_2 = new QLabel(MenuPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label_2->setFont(font);
        btnCloseMenuPage = new QPushButton(MenuPage);
        btnCloseMenuPage->setObjectName(QString::fromUtf8("btnCloseMenuPage"));
        btnCloseMenuPage->setGeometry(QRect(200, 383, 192, 31));

        retranslateUi(MenuPage);

        QMetaObject::connectSlotsByName(MenuPage);
    } // setupUi

    void retranslateUi(QWidget *MenuPage)
    {
        MenuPage->setWindowTitle(QCoreApplication::translate("MenuPage", "Menu", nullptr));
        btnOpenSaldo->setText(QCoreApplication::translate("MenuPage", "Saldo", nullptr));
        btnOpenNosto->setText(QCoreApplication::translate("MenuPage", "Nosto", nullptr));
        btnOpenSiirto->setText(QCoreApplication::translate("MenuPage", "Siirto", nullptr));
        btnOpenTapahtumat->setText(QCoreApplication::translate("MenuPage", "Tapahtumat", nullptr));
        btnOpenTalletus->setText(QCoreApplication::translate("MenuPage", "Talletus", nullptr));
        label_2->setText(QCoreApplication::translate("MenuPage", "Bank Automat", nullptr));
        btnCloseMenuPage->setText(QCoreApplication::translate("MenuPage", "Sulje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPage: public Ui_MenuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
