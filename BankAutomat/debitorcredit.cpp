#include "debitorcredit.h"
#include "ui_debitorcredit.h"
#include "menupage.h"
#include "saldoform.h"
#include "ui_saldoform.h"
#include "mysingleton.h"

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include <QString>


QString cardchoice, account;

DebitorCredit::DebitorCredit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DebitorCredit)
{
    ui->setupUi(this);
}

DebitorCredit::~DebitorCredit()
{
    delete ui;
}

void DebitorCredit::on_btnTili_clicked()
{

    MySingleton *cardtype = MySingleton::getInstance();             //move cardID

    account =cardtype->getAccountID();

    if(account <= "300")                                         //CardID under 1000
    {
    ui->btnValitseDebit->setEnabled(true); }

     if(account >= "200")                                       // cardID under 10
    {                                            //Credit side account //++missing check availability of creditlimit = if available -- enabled

    ui->btnValitseCredit->setEnabled(true);}



}

void DebitorCredit::on_btnValitseCredit_clicked()                    // Credit tili valinta
{
    cardchoice = "1";                                                //Set cardtype to Credit
    MySingleton *credittype = MySingleton::getInstance();            //move cardID to accountID

    credittype->setCardtype(cardchoice);


    MenuPage *mpp = new MenuPage();
    mpp->show();



    this->close();
}

void DebitorCredit::on_btnValitseDebit_clicked()                     // Debit tili valinta
{
    cardchoice = "2";
    MySingleton *debittype = MySingleton::getInstance();             //move cardID to accountID

    debittype->setCardtype(cardchoice);

    MenuPage *mpp = new MenuPage();
    mpp->show();




    this->close();

}



