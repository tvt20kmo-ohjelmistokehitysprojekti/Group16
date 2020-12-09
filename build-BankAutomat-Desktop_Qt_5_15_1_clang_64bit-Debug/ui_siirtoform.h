/********************************************************************************
** Form generated from reading UI file 'siirtoform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIIRTOFORM_H
#define UI_SIIRTOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiirtoForm
{
public:
    QLabel *label;
    QLabel *labelSyotaSumma;
    QLineEdit *lineEditSiirtoSumma;
    QPushButton *btnSiirto;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnSiirto_2;

    void setupUi(QWidget *SiirtoForm)
    {
        if (SiirtoForm->objectName().isEmpty())
            SiirtoForm->setObjectName(QString::fromUtf8("SiirtoForm"));
        SiirtoForm->resize(600, 300);
        label = new QLabel(SiirtoForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        labelSyotaSumma = new QLabel(SiirtoForm);
        labelSyotaSumma->setObjectName(QString::fromUtf8("labelSyotaSumma"));
        labelSyotaSumma->setGeometry(QRect(190, 130, 101, 21));
        lineEditSiirtoSumma = new QLineEdit(SiirtoForm);
        lineEditSiirtoSumma->setObjectName(QString::fromUtf8("lineEditSiirtoSumma"));
        lineEditSiirtoSumma->setGeometry(QRect(300, 130, 113, 24));
        btnSiirto = new QPushButton(SiirtoForm);
        btnSiirto->setObjectName(QString::fromUtf8("btnSiirto"));
        btnSiirto->setGeometry(QRect(140, 240, 141, 31));
        label_3 = new QLabel(SiirtoForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 190, 231, 16));
        QFont font1;
        font1.setPointSize(17);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(SiirtoForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 210, 191, 16));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        btnSiirto_2 = new QPushButton(SiirtoForm);
        btnSiirto_2->setObjectName(QString::fromUtf8("btnSiirto_2"));
        btnSiirto_2->setGeometry(QRect(320, 240, 141, 31));

        retranslateUi(SiirtoForm);

        QMetaObject::connectSlotsByName(SiirtoForm);
    } // setupUi

    void retranslateUi(QWidget *SiirtoForm)
    {
        SiirtoForm->setWindowTitle(QCoreApplication::translate("SiirtoForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SiirtoForm", "Bank Automat", nullptr));
        labelSyotaSumma->setText(QCoreApplication::translate("SiirtoForm", "Sy\303\266t\303\244 Summa : ", nullptr));
        btnSiirto->setText(QCoreApplication::translate("SiirtoForm", "Vahvista", nullptr));
        label_3->setText(QCoreApplication::translate("SiirtoForm", "Siirret\303\244\303\244n tililt\303\244", nullptr));
        label_4->setText(QCoreApplication::translate("SiirtoForm", "Tilille ", nullptr));
        btnSiirto_2->setText(QCoreApplication::translate("SiirtoForm", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiirtoForm: public Ui_SiirtoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIIRTOFORM_H
