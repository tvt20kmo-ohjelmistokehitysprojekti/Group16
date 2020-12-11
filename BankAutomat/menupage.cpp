#include "menupage.h"
#include "saldoform.h"
#include "nostoform.h"
#include "ui_menupage.h"
#include "tapahtumatform.h"
#include "talletusform.h"
#include "mysingleton.h"
#include "debitorcredit.h"
#include <QString>
#include <signoutform.h>


MenuPage::MenuPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);


}
MenuPage::~MenuPage()
{
        delete ui;
}





void MenuPage::on_btnOpenNosto_clicked() //Nosto
{
    NostoForm *nff= new NostoForm();
    nff->show();

    this->close();




}

void MenuPage::on_btnOpenSaldo_clicked() //Saldo kysely
{
    SaldoForm *sfm= new SaldoForm();
    sfm->show();

    this->close();

}

void MenuPage::on_btnOpenTapahtumat_clicked() //Tapahtumat
{
    TapahtumatForm *tff= new TapahtumatForm();
    tff->show();

    this->close();
}

void MenuPage::on_btnOpenTalletus_clicked() //Talletus
{
   TalletusForm *ttt= new TalletusForm();
   ttt->show();

   this->close();
}

void MenuPage::on_btnCloseMenuPage_clicked() //Close Menu
{
    this->close();

    SignOutForm *sof = new SignOutForm();
    sof->show();

}

void MenuPage::on_btnCardID_clicked()   //Check CardID
{
    QString DorC;
    MySingleton *cardtype = MySingleton::getInstance(); //move cardID

    DorC=cardtype->getAccountID();

    ui->labelResult->setText(" "+DorC);

}
