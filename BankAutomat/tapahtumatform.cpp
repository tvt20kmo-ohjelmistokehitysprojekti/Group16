#include "menupage.h"
#include "mysingleton.h"
#include "tapahtumatform.h"
#include "ui_tapahtumatform.h"

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QStandardItemModel>

TapahtumatForm::TapahtumatForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TapahtumatForm)
{
    ui->setupUi(this);
}

TapahtumatForm::~TapahtumatForm()
{
    delete ui;
}

void TapahtumatForm::on_btnShowTapahtumat_clicked()
{
  QString TapahtumaTili;


  MySingleton *cardtype = MySingleton::getInstance(); //Account ID for Tapahtumat

           TapahtumaTili=cardtype->getAccountID();

          if(TapahtumaTili == "440")
          {
              TapahtumaTili = "111";
          }


       QNetworkRequest requestTapahtumat(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/tapahtumat/?id="+TapahtumaTili));
        requestTapahtumat.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
                                         //Authenticate
        QString username="admin";
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           requestTapahtumat.setRawHeader( "Authorization", headerData.toLocal8Bit() );


        QNetworkAccessManager nam;
        QNetworkReply *reply = nam.get(requestTapahtumat);
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();

        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonObject jsobj = json_doc.object();
        QJsonArray jsarr = json_doc.array();

        QString events;

        foreach(const QJsonValue &value, jsarr){
           QJsonObject event = value.toObject();
           events+=event["Date"].toString()         +"|  "
                 +event["Balance"].toString()       +"|  \n ";}


                ui->textEditTapahtumat->setText("  \n "+events); // tapahtumat



              reply->deleteLater();


}
void TapahtumatForm::on_btnCloseTapahtumat_clicked()
{
    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();
}
