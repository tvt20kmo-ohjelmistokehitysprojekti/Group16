
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
    QString SaldoAccount, credit, debit, Card;


    MySingleton *cardtype = MySingleton::getInstance(); //Account ID for Saldo

    SaldoAccount=cardtype->getAccountID();


    MySingleton *kortti = MySingleton::getInstance(); //Card Type for Saldo

    Card=kortti->getCardtype();

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





        foreach(const QJsonValue &value, jsarr){


            QJsonObject creditsum = value.toObject();
            credit+=                                        + "| Balance : "
                        +creditsum["Balance"].toString()    + "(€) |" "\n | Credit Limit : "
                        +creditsum["CreditLimit"].toString()+ "(€) |";

            QJsonObject debitsum = value.toObject();
            debit+=                                        + "| Balance : "
                        +debitsum["Balance"].toString()    + " (€) |" ;




        }
        if(SaldoAccount > "200" && Card =="1") // Over 200 = Credit type card
        {
            ui->labelSaldo->setText(" "+credit); // Show Credit side Balance

        }

        if(SaldoAccount < "200" && Card =="2") // Under 200 = Debit type card
        {
            ui->labelSaldo->setText(" "+debit); // Show Debit side balance
        }
        else if(SaldoAccount > "200" && Card== "2") // Show Credit User (Debit) as chosen side
        {
            ui->labelSaldo->setText(" "+debit);
        }

        reply->deleteLater();
}


void SaldoForm::on_btnSulje_clicked()
{

    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();

}
