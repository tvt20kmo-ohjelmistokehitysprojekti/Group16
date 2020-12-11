#include "debitorcredit.h"
#include "ui_debitorcredit.h"
#include "menupage.h"
#include "mysingleton.h"

QString cardchoice;

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

void DebitorCredit::on_btnValitseCredit_clicked() // Credit tili valinta
{
    MenuPage *mpp = new MenuPage();
    mpp->show();

    MySingleton *cardtype = MySingleton::getInstance(); //move cardID

    cardchoice = ("1");

    cardtype->setCardtype(cardchoice);





    this->close();
}

void DebitorCredit::on_btnValitseDebit_clicked() // Debit tili valinta
{
    MenuPage *mpp = new MenuPage();
    mpp->show();
    MySingleton *cardtype = MySingleton::getInstance(); //move cardID

    cardchoice = ("2");

    cardtype->setCardtype(cardchoice);







    this->close();

}
