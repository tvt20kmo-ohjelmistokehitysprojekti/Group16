
#include "ui_saldoform.h"
#include "menupage.h"
#include "mysingleton.h"
#include "saldoform.h"

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>


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


void SaldoForm::on_btnShowSaldo_clicked()
{    QString SaldoAccount;



                                                                                     //Account/?idAccount="+saldoAccount below //
    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
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

        // QString Account;

        QString saldo, credit, creditLimit;

        foreach(const QJsonValue &value, jsarr){

          // QJsonObject acnt = value.toObject();
         //  Account+=   acnt["Creditlimit"].toString()      +", "
               //    +   acnt["Balance"]    .toString()      +"\r";


            QJsonObject creditsum = value.toObject();
            credit+= creditsum["name"].toString() +"  |  ";

            QJsonObject info = value.toObject();
            saldo+= info["isbn"].toString() +"  | ";



           MySingleton *cardtype = MySingleton::getInstance(); //check cardID (Debit / Credit)
           SaldoAccount= cardtype->getAccountID();

           if(SaldoAccount == "1") //credit
           {
               ui->labelSaldo->setText("Credit Side "+credit); //<----(Account) here
           }
           if(SaldoAccount == "2") //debit
           {
               ui->labelSaldo->setText("Debit Side "+saldo);
           }



        }

        reply->deleteLater();
}


void SaldoForm::on_btnSulje_clicked()
{

    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();

}
