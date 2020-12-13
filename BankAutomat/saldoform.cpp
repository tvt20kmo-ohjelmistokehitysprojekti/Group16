
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
    QString SaldoAccount;

    MySingleton *cardtype = MySingleton::getInstance(); //move cardID

    SaldoAccount=cardtype->getAccountID();




    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/Account/Account/?id="+SaldoAccount));
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


        QString credit;


        foreach(const QJsonValue &value, jsarr){


            QJsonObject creditsum = value.toObject();
            credit+=                                        + "| Balance : "
                        +creditsum["Balance"].toString()    + "(€) |" "\n | Credit Limit : "
                        +creditsum["CreditLimit"].toString()+ "(€) |";




        }
        if(SaldoAccount == "222");
        {
            ui->labelSaldo->setText(" "+credit); //<----(Account) here

        }

        reply->deleteLater();
}


void SaldoForm::on_btnSulje_clicked()
{

    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();

}
