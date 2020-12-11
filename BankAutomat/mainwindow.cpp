#include "mainwindow.h"
#include "menupage.h"
#include "debitorcredit.h"
#include "mysingleton.h"

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

    QString loginCardID,              //CardID
            loginPassword;              //Password


    loginCardID=ui->lineEditUser->text();
    loginPassword=ui->lineEditPin->text();







    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/login?username="+loginCardID+"&password="+loginPassword)) ;
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");       //correct url above needed !

        QString username="admin";        //Authenticate
        QString password="1234";
        QString concatenatedCredentials = username + ":" + password;
        QByteArray data = concatenatedCredentials.toLocal8Bit().toBase64();
        QString headerData = "Basic " + data;
        request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

           QJsonObject json;
           QNetworkAccessManager nam;
           QNetworkReply *reply = nam.post(request, QJsonDocument(json).toJson());

           while (!reply->isFinished())
        {
            qApp->processEvents();
        }

           QByteArray response_data = reply->readAll();


           qDebug()<<"DATA: "+response_data;

        reply->deleteLater();

        if(response_data.compare("true")==0){
            ui->labelSignIn->setText("Right");
        }
        else {

            ui->labelSignIn->setText("Wrong"); //for now used

            DebitorCredit *doc= new DebitorCredit();
            doc ->show();

            MySingleton *login = MySingleton::getInstance(); //move cardID

            login->setAccountID(loginCardID);

            this->close();


        }


}


