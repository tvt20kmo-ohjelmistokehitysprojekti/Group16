#include "signoutform.h"
#include "ui_signoutform.h"

SignOutForm::SignOutForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignOutForm)
{
    ui->setupUi(this);
}

SignOutForm::~SignOutForm()
{
    delete ui;
}

void SignOutForm::on_btnSulje_clicked()
{
    this->close();
}
