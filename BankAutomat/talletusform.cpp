#include "mysingleton.h"
#include "talletusform.h"
#include "ui_talletusform.h"
#include "menupage.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>

QString talletusSum, typeCheck;

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



void TalletusForm::on_lineEditSiirtoSumma_textChanged(const QString &arg1) //Show talletus sum when editing Sum.
{



    talletusSum= ui->lineEditSiirtoSumma->text();

     ui->labelTalletusend->setText("Talletus summa: "+talletusSum+" (€)");



     MySingleton *cardtype = MySingleton::getInstance(); //check cardID
     typeCheck= cardtype->getAccountID();


         ui->labelTalletusTilille->setText("tilille talletus: "+talletusSum+ " (€)  \n Vahvista talletus");
     }


void TalletusForm::on_btnVahvistaTalletus_clicked()
{

    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/account/otto"+typeCheck));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username +":"+ password;
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

        QString BalanceSum;

        foreach(const QJsonValue &value, jsarr){
           QJsonObject talletus = value.toObject();
           BalanceSum+= talletus["Balance"].toString();



                           float Balance;

                           Balance = BalanceSum.toFloat() + talletusSum.toFloat();



           ui->labelTalletusTilille->setText("Talletus Onnistui !");
           ui->labelTalletusend->setNum(Balance);

}





        reply->deleteLater();

 }


void TalletusForm::on_btnCloseTalletus_clicked() // Exit
{

    MenuPage *mpp= new MenuPage();

        mpp->show();

        this->close();

}
