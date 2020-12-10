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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TapahtumatForm
{
public:
    QLabel *label;
    QTableView *tableTapahtumat;
    QPushButton *btnCloseTapahtumat;
    QPushButton *pushButton;

    void setupUi(QWidget *TapahtumatForm)
    {
        if (TapahtumatForm->objectName().isEmpty())
            TapahtumatForm->setObjectName(QString::fromUtf8("TapahtumatForm"));
        TapahtumatForm->resize(600, 312);
        label = new QLabel(TapahtumatForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 291, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Marker Felt"));
        font.setPointSize(46);
        label->setFont(font);
        tableTapahtumat = new QTableView(TapahtumatForm);
        tableTapahtumat->setObjectName(QString::fromUtf8("tableTapahtumat"));
        tableTapahtumat->setGeometry(QRect(40, 140, 521, 111));
        btnCloseTapahtumat = new QPushButton(TapahtumatForm);
        btnCloseTapahtumat->setObjectName(QString::fromUtf8("btnCloseTapahtumat"));
        btnCloseTapahtumat->setGeometry(QRect(220, 270, 151, 24));
        pushButton = new QPushButton(TapahtumatForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 100, 121, 24));

        retranslateUi(TapahtumatForm);

        QMetaObject::connectSlotsByName(TapahtumatForm);
    } // setupUi

    void retranslateUi(QWidget *TapahtumatForm)
    {
        TapahtumatForm->setWindowTitle(QCoreApplication::translate("TapahtumatForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("TapahtumatForm", "Bank Automat", nullptr));
        btnCloseTapahtumat->setText(QCoreApplication::translate("TapahtumatForm", "Sulje", nullptr));
        pushButton->setText(QCoreApplication::translate("TapahtumatForm", "N\303\244yt\303\244 Tapahtumat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TapahtumatForm: public Ui_TapahtumatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMATFORM_H
