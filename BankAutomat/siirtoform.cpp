#include "menupage.h"
#include "mysingleton.h"
#include "siirtoform.h"
#include "ui_siirtoform.h"

SiirtoForm::SiirtoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SiirtoForm)
{
    ui->setupUi(this);
}

SiirtoForm::~SiirtoForm()
{
    delete ui;
}


void SiirtoForm::on_btnVahvistaSiirto_clicked()
{

}

void SiirtoForm::on_btnStop_clicked()
{
    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();
}

void SiirtoForm::on_lineEditSiirtoSumma_textChanged(const QString &arg1)
{
    QString Cardtype;

    MySingleton *cardtype = MySingleton::getInstance(); //check cardID (Debit / Credit)
    Cardtype= cardtype->getAccountID();

    if(Cardtype == "1")
    {
        ui->labelFromAccount->setText("Siirretään Tililtä Credit");
        ui->labelToAccount->setText("Tilille Debit");
    }
    if(Cardtype == "2")
    {
        ui->labelFromAccount->setText("Siirretään Tililtä Debit");
        ui->labelToAccount->setText("Tilille Credit");
    }
}
