/********************************************************************************
** Form generated from reading UI file 'saldoform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDOFORM_H
#define UI_SALDOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaldoForm
{
public:
    QLabel *labelBalance;
    QPushButton *btnSulje;
    QLabel *label_3;

    void setupUi(QWidget *SaldoForm)
    {
        if (SaldoForm->objectName().isEmpty())
            SaldoForm->setObjectName(QString::fromUtf8("SaldoForm"));
        SaldoForm->setEnabled(true);
        SaldoForm->resize(600, 193);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SaldoForm->sizePolicy().hasHeightForWidth());
        SaldoForm->setSizePolicy(sizePolicy);
        SaldoForm->setLayoutDirection(Qt::LeftToRight);
        SaldoForm->setAutoFillBackground(false);
        labelBalance = new QLabel(SaldoForm);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setGeometry(QRect(70, 110, 451, 21));
        btnSulje = new QPushButton(SaldoForm);
        btnSulje->setObjectName(QString::fromUtf8("btnSulje"));
        btnSulje->setGeometry(QRect(210, 140, 181, 31));
        label_3 = new QLabel(SaldoForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 10, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label_3->setFont(font);

        retranslateUi(SaldoForm);

        QMetaObject::connectSlotsByName(SaldoForm);
    } // setupUi

    void retranslateUi(QWidget *SaldoForm)
    {
        SaldoForm->setWindowTitle(QCoreApplication::translate("SaldoForm", "SaldoKysely", nullptr));
        labelBalance->setText(QCoreApplication::translate("SaldoForm", "Tilill\303\244 on k\303\244ytett\303\244viss\303\244 :", nullptr));
        btnSulje->setText(QCoreApplication::translate("SaldoForm", "Sulje", nullptr));
        label_3->setText(QCoreApplication::translate("SaldoForm", "Bank Automat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaldoForm: public Ui_SaldoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDOFORM_H
