#include "menuform.h"
#include "nostoform.h"
#include "saldoform.h"
#include "siirtoform.h"
#include "tapahtumatform.h"
#include "ui_menuform.h"



MenuForm::~MenuForm()
{
    delete ui;
}

void MenuForm::on_btnTapahtumat_clicked()
{
    TapahtumatForm *tf=new TapahtumatForm();
    tf->show();

    close();

    delete tf;
    tf = nullptr;
}

void MenuForm::on_btnNosto_clicked()
{
    NostoForm *nf= new NostoForm();
    nf-> show();

    this->close();

    delete nf;
    nf= nullptr;
}

void MenuForm::on_btnSaldo_clicked()
{
    SaldoForm *bs= new SaldoForm();
    bs ->show();

    this->close();

    delete bs;
    bs= nullptr;
}



void MenuForm::on_btnSuljeMenu_clicked()
{
       this->close();
}

void MenuForm::on_btnSiirto_clicked()
{
    SiirtoForm *sf= new SiirtoForm();
    sf->show();

    this->close();

    delete sf;
    sf = nullptr;
}
