/********************************************************************************
** Form generated from reading UI file 'debitorcreditform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBITORCREDITFORM_H
#define UI_DEBITORCREDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebitorCreditForm
{
public:
    QLabel *label;
    QPushButton *btnCredit;
    QPushButton *btnDebit;
    QLabel *label_2;

    void setupUi(QWidget *DebitorCreditForm)
    {
        if (DebitorCreditForm->objectName().isEmpty())
            DebitorCreditForm->setObjectName(QString::fromUtf8("DebitorCreditForm"));
        DebitorCreditForm->setEnabled(true);
        DebitorCreditForm->resize(600, 204);
        label = new QLabel(DebitorCreditForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 70, 91, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        btnCredit = new QPushButton(DebitorCreditForm);
        btnCredit->setObjectName(QString::fromUtf8("btnCredit"));
        btnCredit->setGeometry(QRect(120, 130, 161, 41));
        btnDebit = new QPushButton(DebitorCreditForm);
        btnDebit->setObjectName(QString::fromUtf8("btnDebit"));
        btnDebit->setGeometry(QRect(330, 130, 161, 41));
        label_2 = new QLabel(DebitorCreditForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 291, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Marker Felt"));
        font1.setPointSize(46);
        label_2->setFont(font1);

        retranslateUi(DebitorCreditForm);

        QMetaObject::connectSlotsByName(DebitorCreditForm);
    } // setupUi

    void retranslateUi(QWidget *DebitorCreditForm)
    {
        DebitorCreditForm->setWindowTitle(QCoreApplication::translate("DebitorCreditForm", "Credit / Debit ", nullptr));
        label->setText(QCoreApplication::translate("DebitorCreditForm", "Valitse :", nullptr));
        btnCredit->setText(QCoreApplication::translate("DebitorCreditForm", "Credit Tili", nullptr));
        btnDebit->setText(QCoreApplication::translate("DebitorCreditForm", "Debit Tili", nullptr));
        label_2->setText(QCoreApplication::translate("DebitorCreditForm", "Bank Automat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebitorCreditForm: public Ui_DebitorCreditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBITORCREDITFORM_H
