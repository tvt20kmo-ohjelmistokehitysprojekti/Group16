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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalletusForm
{
public:

    void setupUi(QWidget *TalletusForm)
    {
        if (TalletusForm->objectName().isEmpty())
            TalletusForm->setObjectName(QString::fromUtf8("TalletusForm"));
        TalletusForm->resize(655, 438);

        retranslateUi(TalletusForm);

        QMetaObject::connectSlotsByName(TalletusForm);
    } // setupUi

    void retranslateUi(QWidget *TalletusForm)
    {
        TalletusForm->setWindowTitle(QCoreApplication::translate("TalletusForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TalletusForm: public Ui_TalletusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALLETUSFORM_H
