#include "menupage.h"

#include "mainwindow.h"
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

QString loginCardID,                               //CardID
        loginPassword;                            //Password

void MainWindow::on_btnSignIn_clicked()           // Login system

{
    loginCardID=ui->lineEditUser->text();
    loginPassword=ui->lineEditPin->text();


    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/login/check_login?idCard="+loginCardID+"&password="+loginPassword));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QString username="admin";
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

           ui->labelResult->setText(response_data);


           reply->deleteLater();


    if(response_data.compare("true")==0){


        ui->labelSignIn->setText("Right");              //Login Success
        MenuPage *doc= new MenuPage();
        doc ->show();
        MySingleton *login = MySingleton::getInstance(); //set cardID
        //should be in ""Right"" section.
        login->setAccountID(loginCardID);

        this->close();

    } else if(response_data.compare("false")!=0) {      //Login failed
        ui->labelSignIn->setText("Wrong");       }

}

