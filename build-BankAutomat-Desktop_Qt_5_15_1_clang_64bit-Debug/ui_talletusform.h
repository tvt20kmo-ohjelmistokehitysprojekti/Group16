/********************************************************************************
** Form generated from reading UI file 'talletusform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALLETUSFORM_H
#define UI_TALLETUSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalletusForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditSumma;
    QPushButton *btnVahvista;
    QPushButton *btnClose;
    QLabel *label_3;

    void setupUi(QWidget *TalletusForm)
    {
        if (TalletusForm->objectName().isEmpty())
            TalletusForm->setObjectName(QString::fromUtf8("TalletusForm"));
        TalletusForm->resize(600, 300);
        label = new QLabel(TalletusForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 110, 111, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(TalletusForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 291, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Marker Felt"));
        font1.setPointSize(46);
        label_2->setFont(font1);
        lineEditSumma = new QLineEdit(TalletusForm);
        lineEditSumma->setObjectName(QString::fromUtf8("lineEditSumma"));
        lineEditSumma->setGeometry(QRect(270, 110, 113, 31));
        btnVahvista = new QPushButton(TalletusForm);
        btnVahvista->setObjectName(QString::fromUtf8("btnVahvista"));
        btnVahvista->setGeometry(QRect(230, 170, 141, 31));
        btnClose = new QPushButton(TalletusForm);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(230, 220, 141, 31));
        label_3 = new QLabel(TalletusForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(390, 115, 58, 21));
        QFont font2;
        font2.setPointSize(19);
        label_3->setFont(font2);

        retranslateUi(TalletusForm);

        QMetaObject::connectSlotsByName(TalletusForm);
    } // setupUi

    void retranslateUi(QWidget *TalletusForm)
    {
        TalletusForm->setWindowTitle(QCoreApplication::translate("TalletusForm", "Talletus", nullptr));
        label->setText(QCoreApplication::translate("TalletusForm", "Sy\303\266t\303\244 Summa :", nullptr));
        label_2->setText(QCoreApplication::translate("TalletusForm", "Bank Automat", nullptr));
        btnVahvista->setText(QCoreApplication::translate("TalletusForm", "Vahvista", nullptr));
        btnClose->setText(QCoreApplication::translate("TalletusForm", "Stop", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TalletusForm: public Ui_TalletusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALLETUSFORM_H
