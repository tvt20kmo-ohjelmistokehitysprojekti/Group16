#include "menupage.h"
#include "saldoform.h"
#include "nostoform.h"

#include "ui_menupage.h"

MenuPage::MenuPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);

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

}
