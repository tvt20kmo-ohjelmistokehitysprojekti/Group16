/********************************************************************************
** Form generated from reading UI file 'debitorcredit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBITORCREDIT_H
#define UI_DEBITORCREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebitorCredit
{
public:
    QLabel *label;
    QPushButton *btnValitseCredit;
    QPushButton *btnValitseDebit;

    void setupUi(QWidget *DebitorCredit)
    {
        if (DebitorCredit->objectName().isEmpty())
            DebitorCredit->setObjectName(QString::fromUtf8("DebitorCredit"));
        DebitorCredit->resize(600, 250);
        label = new QLabel(DebitorCredit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        btnValitseCredit = new QPushButton(DebitorCredit);
        btnValitseCredit->setObjectName(QString::fromUtf8("btnValitseCredit"));
        btnValitseCredit->setGeometry(QRect(100, 140, 171, 31));
        btnValitseDebit = new QPushButton(DebitorCredit);
        btnValitseDebit->setObjectName(QString::fromUtf8("btnValitseDebit"));
        btnValitseDebit->setGeometry(QRect(320, 140, 171, 31));

        retranslateUi(DebitorCredit);

        QMetaObject::connectSlotsByName(DebitorCredit);
    } // setupUi

    void retranslateUi(QWidget *DebitorCredit)
    {
        DebitorCredit->setWindowTitle(QCoreApplication::translate("DebitorCredit", "Valitse Tili", nullptr));
        label->setText(QCoreApplication::translate("DebitorCredit", "Bank Automat", nullptr));
        btnValitseCredit->setText(QCoreApplication::translate("DebitorCredit", "Credit", nullptr));
        btnValitseDebit->setText(QCoreApplication::translate("DebitorCredit", "Debit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebitorCredit: public Ui_DebitorCredit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBITORCREDIT_H
