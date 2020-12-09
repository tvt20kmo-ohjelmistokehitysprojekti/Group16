/********************************************************************************
** Form generated from reading UI file 'nostoform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOFORM_H
#define UI_NOSTOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostoForm
{
public:
    QPushButton *btnStop;
    QLabel *label;
    QPushButton *btnVahvista;
    QLabel *label_2;
    QPushButton *btn20euroa;
    QPushButton *btn60euroa;
    QPushButton *btn40euroa;
    QPushButton *btn80euroa;
    QPushButton *btn100euroa;
    QPushButton *btn50euroa;
    QLineEdit *lineEditMuuSumma;
    QLabel *labelMuu;
    QLabel *labelNostoStatus;

    void setupUi(QWidget *NostoForm)
    {
        if (NostoForm->objectName().isEmpty())
            NostoForm->setObjectName(QString::fromUtf8("NostoForm"));
        NostoForm->resize(599, 375);
        btnStop = new QPushButton(NostoForm);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(510, 220, 81, 41));
        label = new QLabel(NostoForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 151, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        btnVahvista = new QPushButton(NostoForm);
        btnVahvista->setObjectName(QString::fromUtf8("btnVahvista"));
        btnVahvista->setGeometry(QRect(400, 220, 81, 41));
        btnVahvista->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 153, 11);"));
        label_2 = new QLabel(NostoForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 291, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Marker Felt"));
        font1.setPointSize(46);
        label_2->setFont(font1);
        btn20euroa = new QPushButton(NostoForm);
        btn20euroa->setObjectName(QString::fromUtf8("btn20euroa"));
        btn20euroa->setGeometry(QRect(40, 150, 101, 41));
        btn60euroa = new QPushButton(NostoForm);
        btn60euroa->setObjectName(QString::fromUtf8("btn60euroa"));
        btn60euroa->setGeometry(QRect(40, 220, 101, 41));
        btn40euroa = new QPushButton(NostoForm);
        btn40euroa->setObjectName(QString::fromUtf8("btn40euroa"));
        btn40euroa->setGeometry(QRect(160, 150, 101, 41));
        btn80euroa = new QPushButton(NostoForm);
        btn80euroa->setObjectName(QString::fromUtf8("btn80euroa"));
        btn80euroa->setGeometry(QRect(160, 220, 101, 41));
        btn100euroa = new QPushButton(NostoForm);
        btn100euroa->setObjectName(QString::fromUtf8("btn100euroa"));
        btn100euroa->setGeometry(QRect(280, 220, 101, 41));
        btn50euroa = new QPushButton(NostoForm);
        btn50euroa->setObjectName(QString::fromUtf8("btn50euroa"));
        btn50euroa->setGeometry(QRect(280, 150, 101, 40));
        lineEditMuuSumma = new QLineEdit(NostoForm);
        lineEditMuuSumma->setObjectName(QString::fromUtf8("lineEditMuuSumma"));
        lineEditMuuSumma->setGeometry(QRect(440, 170, 91, 24));
        labelMuu = new QLabel(NostoForm);
        labelMuu->setObjectName(QString::fromUtf8("labelMuu"));
        labelMuu->setGeometry(QRect(440, 140, 81, 20));
        labelNostoStatus = new QLabel(NostoForm);
        labelNostoStatus->setObjectName(QString::fromUtf8("labelNostoStatus"));
        labelNostoStatus->setGeometry(QRect(360, 290, 221, 31));
        QFont font2;
        font2.setPointSize(14);
        labelNostoStatus->setFont(font2);

        retranslateUi(NostoForm);

        QMetaObject::connectSlotsByName(NostoForm);
    } // setupUi

    void retranslateUi(QWidget *NostoForm)
    {
        NostoForm->setWindowTitle(QCoreApplication::translate("NostoForm", "Nosto", nullptr));
        btnStop->setText(QCoreApplication::translate("NostoForm", "Stop", nullptr));
        label->setText(QCoreApplication::translate("NostoForm", "Valitse Summa ", nullptr));
        btnVahvista->setText(QCoreApplication::translate("NostoForm", "Vahvista", nullptr));
        label_2->setText(QCoreApplication::translate("NostoForm", "Bank Automat", nullptr));
        btn20euroa->setText(QCoreApplication::translate("NostoForm", "20 \342\202\254", nullptr));
        btn60euroa->setText(QCoreApplication::translate("NostoForm", "60 \342\202\254", nullptr));
        btn40euroa->setText(QCoreApplication::translate("NostoForm", "40 \342\202\254", nullptr));
        btn80euroa->setText(QCoreApplication::translate("NostoForm", "80 \342\202\254", nullptr));
        btn100euroa->setText(QCoreApplication::translate("NostoForm", "100 \342\202\254", nullptr));
        btn50euroa->setText(QCoreApplication::translate("NostoForm", "50 \342\202\254", nullptr));
        labelMuu->setText(QCoreApplication::translate("NostoForm", "Muu Summa :", nullptr));
        labelNostoStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NostoForm: public Ui_NostoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOFORM_H
