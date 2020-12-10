#include "mainwindow.h"
#include "menupage.h"
#include "debitorcredit.h"

#include "ui_mainwindow.h"
#include <QtNetwork>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_btnSignIn_clicked() // Login system not progressing

{



    QString loginUsername,loginPassword;
    loginUsername=ui->lineEditUser->text();
    loginPassword=ui->lineEditPin->text();

    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/Group16/RestApi/index.php/api/login"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QString username="admin";       //Authenticate
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
           QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
           QString headerData = "Basic " + data;
           request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

           QJsonObject json;
           json.insert("username",loginUsername);
           json.insert("password",loginPassword);
           QNetworkAccessManager nam;
           QNetworkReply *reply = nam.post(request, QJsonDocument(json).toJson());
        while (!reply->isFinished())
        {
            qApp->processEvents();
        }
        QByteArray response_data = reply->readAll();

        qDebug()<<"DATA:"+response_data;

        reply->deleteLater();

        if(response_data.compare("true")==0){
            ui->labelSignIn->setText("Right");
        }
        else {

            ui->labelSignIn->setText("Wrong"); //for now used

            DebitorCredit *doc= new DebitorCredit();
            doc ->show();

            this->close();


        }


}


void MainWindow::on_btnShowBooks_clicked()
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

        QString book;
        foreach (const QJsonValue &value, jsarr) {
          QJsonObject jsob = value.toObject();
          book+=jsob["id_book"].toString()+", "
                  +jsob["name"].toString()+", "
                  +jsob["author"].toString()+"\r";
          ui->txtBooks->setText(book);
        }

        reply->deleteLater();
}


void MainWindow::on_btnSignIn_2_clicked()
{



}
