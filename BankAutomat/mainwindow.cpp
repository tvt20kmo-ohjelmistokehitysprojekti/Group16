#include "menupage.h"
#include "debitorcredit.h"

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

QString loginCardID,                       //CardID also
        loginPassword;                    //Password

void MainWindow::on_btnSignIn_clicked() // Login system not progressing

{
    loginCardID=ui->lineEditUser->text();
    loginPassword=ui->lineEditPin->text();



    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
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

        QNetworkRequest requesting(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
                                                                                        //Authenticate

            QNetworkAccessManager nami;
            QNetworkReply *rep = nam.get(request);

            while (!rep->isFinished())
            {
                qApp->processEvents();
            }

            QByteArray reply_data = rep->readAll();

            QJsonDocument json_docs = QJsonDocument::fromJson(reply_data);
            QJsonArray jsar = json_docs.array();




            // QString Account;

    QString creditcheck;

            foreach(const QJsonValue &value, jsar){

              // QJsonObject acnt = value.toObject();
             //  Account+=   acnt["Creditlimit"].toString()      +", "
                   //    +   acnt["Balance"]    .toString()      +"\r";
                QJsonObject checkcredit = value.toObject();
                creditcheck+= checkcredit["name"].toString() +"Someshit  |  ";

                QJsonObject info = value.toObject();
                creditcheck+= info["isbn"].toString() +"  | ";

                ui->labelShowMe->setText("Hey"+creditcheck);

                rep->deleteLater();
            }


            //move to password right

    if(loginCardID == loginPassword){
            //response_data.compare("true")==0//

        ui->labelSignIn->setText("Right");
        DebitorCredit *doc= new DebitorCredit();
        doc ->show();
        MySingleton *login = MySingleton::getInstance(); //move cardID
        //should be in ""Right"" section.
        login->setAccountID(loginCardID);

        this->close();
    } else if(loginCardID != loginPassword) {
        ui->labelSignIn->setText("Wrong");

      //  ui->labelSignIn->setText("Wrong"); //for now used






















}
}

