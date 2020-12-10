#include "menupage.h"
#include "tapahtumatform.h"
#include "ui_tapahtumatform.h"
#include "user.h"

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
    QNetworkRequest requestTapahtumat(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
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

        QString Name;
        foreach(const QJsonValue &value, jsarr){
           QJsonObject event = value.toObject();
           Name+=event["name"].toString()   +"|  \b |"
                 +event["author"].toString()+"|  \b |"
                 +event["isbn"].toString()  +"|  \n |";

           QString Author;
           foreach(const QJsonValue &value, jsarr){
              QJsonObject event = value.toObject();
              Author+= event["author"].toString()    +"\r ";

              QString book_id;
              foreach(const QJsonValue &value, jsarr){
                 QJsonObject event = value.toObject();
                 book_id+= event["book_id"].toString()    +"\r ";

       ui->textEditTapahtumat->setText(" "+Name);

}
}
}

        reply->deleteLater();
}
void TapahtumatForm::on_btnCloseTapahtumat_clicked()
{
    this->close();

    MenuPage *mpp= new MenuPage();
    mpp->show();
}
