
#include "saldoform.h"
#include "ui_saldoform.h"
SaldoForm::SaldoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaldoForm)
{
    ui->setupUi(this);
}

SaldoForm::~SaldoForm()
{
    delete ui;
}

void SaldoForm::on_btnSulje_clicked()
{

    this->close();

}
