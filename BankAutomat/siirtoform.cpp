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

void SiirtoForm::on_btnSiirto_clicked()
{
    close();
}
