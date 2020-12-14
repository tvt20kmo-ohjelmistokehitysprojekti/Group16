
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
{
    QString SaldoAccount, debit, Card, creditlimiter, credit, creditleft, Balance;


MySingleton *cardtype = MySingleton::getInstance(); //Account ID for Saldo

         SaldoAccount=cardtype->getAccountID();

        if(SaldoAccount == "440")
        {
            SaldoAccount = "111";
        }

    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/saldo/?id="+SaldoAccount));
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
            Balance+=                                   "| Balance : "
                      +sums["saldo"].toString()
                                                    + " (€) |" ;

            }


        ui->labelSaldo->setText(Balance);


        reply->deleteLater();

            }


void SaldoForm::on_btnSulje_clicked()
{

    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();

}
