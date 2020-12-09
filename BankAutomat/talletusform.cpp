#include "talletusform.h"
#include "ui_talletusform.h"

TalletusForm::TalletusForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TalletusForm)
{
    ui->setupUi(this);
}

TalletusForm::~TalletusForm()
{
    delete ui;
}
