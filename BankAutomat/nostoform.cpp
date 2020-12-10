#include "nostoform.h"
#include "ui_nostoform.h"
#include "menupage.h"
#include <QByteArray>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>


QString nostosumma,
          Balance;

NostoForm::NostoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NostoForm)
{
    ui->setupUi(this);
}

NostoForm::~NostoForm()
{
    delete ui;
}



//Withdraw options below
void NostoForm::on_btn20euroa_clicked()                     // Clicked withdraw sum of = 20.
{
    ui->lineEditMuuSumma->setText("20 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "20 ";
}

void NostoForm::on_btn40euroa_clicked()
{
    ui->lineEditMuuSumma->setText("40 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "40 ";

}


void NostoForm::on_btn50euroa_clicked()
{
    ui->lineEditMuuSumma->setText("50 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "50 ";

}

void NostoForm::on_btn60euroa_clicked()
{
    ui->lineEditMuuSumma->setText("60 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "60 ";

}

void NostoForm::on_btn80euroa_clicked()
{
    ui->lineEditMuuSumma->setText("80 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "80 ";

}

void NostoForm::on_btn100euroa_clicked()
{
    ui->lineEditMuuSumma->setText("100 €");
    ui->labelMuu->setText("Valittu: ");
    nostosumma = "100 ";
}

void NostoForm::on_btnVahvista_clicked()
{
                                     //Check reply to balance query & compare if can withdraw

    QNetworkRequest request(QUrl("http://192.168.64.3/dashboard/RestApi/index.php/api/book/book/"));
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



        QString nosto;
        QString tester;

        foreach(const QJsonValue &value, jsarr){
            QJsonObject test = value.toObject();
            tester+= test["name"].toString()                   +", "
                    +test["Date"].toString()                   +",\r ";
//        foreach(const QJsonValue &value, jsarr){
//            QJsonObject info = value.toObject();
//            nosto+= info["idAccount"].toString()    +", "
//                    +info["TYPE"].toString()        +", "
//                    +info["CreditLimit"].toString() +", "
//                    +info["Balance"].toString()     +"\r";


           ui->labelNostoStatus->setText(tester);

        }

}

void NostoForm::on_btnStop_clicked()                           //close Nosto + Open Menu 
{
    this->close();

    MenuPage *mpp= new MenuPage();
    mpp ->show();


}

