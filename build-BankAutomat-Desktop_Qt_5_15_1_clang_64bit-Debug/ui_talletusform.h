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
    QLineEdit *lineEditSiirtoSumma;
    QLabel *labelSyotaSumma;
    QPushButton *btnCloseTalletus;
    QPushButton *btnVahvistaTalletus;
    QLabel *labelTalletusTilille;
    QLabel *labelInfo;

    void setupUi(QWidget *TalletusForm)
    {
        if (TalletusForm->objectName().isEmpty())
            TalletusForm->setObjectName(QString::fromUtf8("TalletusForm"));
        TalletusForm->resize(600, 355);
        label = new QLabel(TalletusForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        lineEditSiirtoSumma = new QLineEdit(TalletusForm);
        lineEditSiirtoSumma->setObjectName(QString::fromUtf8("lineEditSiirtoSumma"));
        lineEditSiirtoSumma->setGeometry(QRect(430, 180, 113, 24));
        labelSyotaSumma = new QLabel(TalletusForm);
        labelSyotaSumma->setObjectName(QString::fromUtf8("labelSyotaSumma"));
        labelSyotaSumma->setGeometry(QRect(320, 180, 101, 21));
        btnCloseTalletus = new QPushButton(TalletusForm);
        btnCloseTalletus->setObjectName(QString::fromUtf8("btnCloseTalletus"));
        btnCloseTalletus->setGeometry(QRect(410, 280, 151, 31));
        QFont font1;
        font1.setPointSize(25);
        btnCloseTalletus->setFont(font1);
        btnVahvistaTalletus = new QPushButton(TalletusForm);
        btnVahvistaTalletus->setObjectName(QString::fromUtf8("btnVahvistaTalletus"));
        btnVahvistaTalletus->setGeometry(QRect(410, 230, 151, 31));
        labelTalletusTilille = new QLabel(TalletusForm);
        labelTalletusTilille->setObjectName(QString::fromUtf8("labelTalletusTilille"));
        labelTalletusTilille->setGeometry(QRect(50, 140, 191, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Avenir Next"));
        font2.setPointSize(17);
        labelTalletusTilille->setFont(font2);
        labelTalletusTilille->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelInfo = new QLabel(TalletusForm);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(210, 230, 151, 21));

        retranslateUi(TalletusForm);

        QMetaObject::connectSlotsByName(TalletusForm);
    } // setupUi

    void retranslateUi(QWidget *TalletusForm)
    {
        TalletusForm->setWindowTitle(QCoreApplication::translate("TalletusForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("TalletusForm", "Bank Automat", nullptr));
        labelSyotaSumma->setText(QCoreApplication::translate("TalletusForm", "Sy\303\266t\303\244 Summa : ", nullptr));
        btnCloseTalletus->setText(QCoreApplication::translate("TalletusForm", "Stop", nullptr));
        btnVahvistaTalletus->setText(QCoreApplication::translate("TalletusForm", "Vahvista", nullptr));
        labelTalletusTilille->setText(QCoreApplication::translate("TalletusForm", "Talletus Tilille : ", nullptr));
        labelInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TalletusForm: public Ui_TalletusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALLETUSFORM_H
