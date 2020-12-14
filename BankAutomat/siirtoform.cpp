#include "menupage.h"
#include "mysingleton.h"
#include "siirtoform.h"
#include "ui_siirtoform.h"
#include "nostoform.h"

#include "ui_nostoform.h"
#include "menupage.h"
#include "mysingleton.h"
#include <QByteArray>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

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


QString AccountId, Balances;

void SiirtoForm::on_btnVahvistaSiirto_clicked()
{

    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/account/siirto/?id="+AccountId));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
                                                                                    //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );


        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.get(request);
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();

        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray jsarr = json_doc.array();




        foreach(const QJsonValue &value, jsarr){



            QJsonObject sums = value.toObject();
            Balances+= "| Balance : " + sums["saldo"].toString() + " (€) |" ; }


        ui->labelResult->setText(Balances);


        reply->deleteLater();

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

    QString SaldoAccount, Balance;


MySingleton *cardtype = MySingleton::getInstance(); //Account ID for Saldo

         SaldoAccount=cardtype->getAccountID();

        if(SaldoAccount == "440")
        {
            SaldoAccount = "111";
        }

        ui->labelFromAccount->setText("Siirretään Tililtä Debit");
        ui->labelToAccount->setText("Tilille Credit");

}
