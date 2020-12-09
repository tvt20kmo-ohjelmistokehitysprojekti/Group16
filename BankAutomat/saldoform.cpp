
#include "saldoform.h"
#include "ui_saldoform.h"

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
        QJsonObject jsobj = json_doc.object();
        QJsonArray jsarr = json_doc.array();
        QString Account;
        foreach(const QJsonValue &value, jsarr){
           QJsonObject acnt = value.toObject();
           Account+=acnt["idAccount"].toString()    +", "
                   +acnt["TYPE"].toString()         +", "
                   +acnt["Creditlimit"].toString()  +", "
                   +acnt["Balance"].toString()      +"\r";
           ui->labelBalance->setText(Account);

        }

        reply->deleteLater();
}


void SaldoForm::on_btnSulje_clicked()
{

    this->close();

}
