#include "talletusform.h"
#include "ui_talletusform.h"


#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "menupage.h"

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

void TalletusForm::on_btnVahvistaTalletus_clicked()
{
    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
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
           BalanceSum+=talletus["idAccount"].toString()    +", "
                   +talletus["Balance"].toString()      +"\r";

           ui->labelTalletusTilille->setText(BalanceSum);

        }

        reply->deleteLater();

 }


void TalletusForm::on_btnCloseTalletus_clicked() // Exit
{

    MenuPage *mpp= new MenuPage();

        mpp->show();

        this->close();

}


void TalletusForm::on_lineEditSiirtoSumma_textChanged(const QString &arg1) //Show talletus sum when editing Sum.
{
    QString talletusSum;

    talletusSum= ui->lineEditSiirtoSumma->text();

     ui->labelInfo->setText("Talletus summa: "+talletusSum+" €");
}
