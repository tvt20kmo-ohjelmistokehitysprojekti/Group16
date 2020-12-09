/********************************************************************************
** Form generated from reading UI file 'tapahtumatform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMATFORM_H
#define UI_TAPAHTUMATFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TapahtumatForm
{
public:

    void setupUi(QWidget *TapahtumatForm)
    {
        if (TapahtumatForm->objectName().isEmpty())
            TapahtumatForm->setObjectName(QString::fromUtf8("TapahtumatForm"));
        TapahtumatForm->resize(600, 312);

        retranslateUi(TapahtumatForm);

        QMetaObject::connectSlotsByName(TapahtumatForm);
    } // setupUi

    void retranslateUi(QWidget *TapahtumatForm)
    {
        TapahtumatForm->setWindowTitle(QCoreApplication::translate("TapahtumatForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TapahtumatForm: public Ui_TapahtumatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMATFORM_H
