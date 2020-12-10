#include "menupage.h"
#include "saldoform.h"
#include "nostoform.h"
#include "ui_menupage.h"
#include "tapahtumatform.h"
#include "talletusform.h"
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





void MenuPage::on_btnOpenNosto_clicked()
{
    NostoForm *nff= new NostoForm();
    nff->show();

    this->close();


}

void MenuPage::on_btnOpenSaldo_clicked()
{
    SaldoForm *sfm= new SaldoForm();
    sfm->show();

    this->close();

}

void MenuPage::on_btnOpenTapahtumat_clicked()
{
    TapahtumatForm *tff= new TapahtumatForm();
    tff->show();

    this->close();
}

void MenuPage::on_btnOpenTalletus_clicked()
{
   TalletusForm *ttt= new TalletusForm();
   ttt->show();

   this->close();
}

void MenuPage::on_btnCloseMenuPage_clicked()
{
    SignOutForm *out= new SignOutForm();
    out->show();

    this->close();
}
