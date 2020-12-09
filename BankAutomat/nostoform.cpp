#include "nostoform.h"
#include "ui_nostoform.h"
#include "menupage.h"
#include "nostoform.h"

QString nostosumma;

NostoForm::NostoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NostoForm)
{
    ui->setupUi(this);
}

NostoForm::~NostoForm()
{
    delete ui;
}



void NostoForm::on_btn20euroa_clicked()                     // Clicked withdraw sum of = 20.
{
    ui->lineEditMuuSumma->setText("20 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "20 ";
}

void NostoForm::on_btn40euroa_clicked()
{
    ui->lineEditMuuSumma->setText("40 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "40 ";

}


void NostoForm::on_btn50euroa_clicked()
{
    ui->lineEditMuuSumma->setText("50 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "50 ";

}

void NostoForm::on_btn60euroa_clicked()
{
    ui->lineEditMuuSumma->setText("60 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "60 ";

}

void NostoForm::on_btn80euroa_clicked()
{
    ui->lineEditMuuSumma->setText("80 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "80 ";

}

void NostoForm::on_btn100euroa_clicked()
{
    ui->lineEditMuuSumma->setText("100 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "100 ";
}

void NostoForm::on_btnVahvista_clicked()
{
    if(nostosumma != NULL) 
    {
    ui->labelNostoStatus->setText(nostosumma+"€ Nosto Onnistui tililtä!");
    ui->btnStop->setText("Sulje");
    }
    else {                                                      // Vahvista clicked with no withdraw sum 
    ui->labelNostoStatus->setText("Valitse Nostosumma ensin !");
    }
}
void NostoForm::on_btnStop_clicked()                           //close Nosto + Open Menu 
{
    this->close();
    MenuPage *mpp= new MenuPage();
    mpp ->show();
}
