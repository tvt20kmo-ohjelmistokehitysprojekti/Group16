/********************************************************************************
** Form generated from reading UI file 'signoutform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNOUTFORM_H
#define UI_SIGNOUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignOutForm
{
public:
    QPushButton *btnSulje;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *SignOutForm)
    {
        if (SignOutForm->objectName().isEmpty())
            SignOutForm->setObjectName(QString::fromUtf8("SignOutForm"));
        SignOutForm->resize(600, 358);
        btnSulje = new QPushButton(SignOutForm);
        btnSulje->setObjectName(QString::fromUtf8("btnSulje"));
        btnSulje->setGeometry(QRect(240, 290, 131, 41));
        label = new QLabel(SignOutForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 130, 281, 61));
        QFont font;
        font.setPointSize(21);
        label->setFont(font);
        label_2 = new QLabel(SignOutForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 291, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Marker Felt"));
        font1.setPointSize(46);
        label_2->setFont(font1);

        retranslateUi(SignOutForm);

        QMetaObject::connectSlotsByName(SignOutForm);
    } // setupUi

    void retranslateUi(QWidget *SignOutForm)
    {
        SignOutForm->setWindowTitle(QCoreApplication::translate("SignOutForm", "Exit", nullptr));
        btnSulje->setText(QCoreApplication::translate("SignOutForm", "Sulje", nullptr));
        label->setText(QCoreApplication::translate("SignOutForm", "<html><head/><body><p>kiitos k\303\244ynnist\303\244 </p><p><span style=\" text-decoration: underline;\">&amp; tervetuloa uudelleen !</span></p><p><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SignOutForm", "Bank Automat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignOutForm: public Ui_SignOutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNOUTFORM_H
