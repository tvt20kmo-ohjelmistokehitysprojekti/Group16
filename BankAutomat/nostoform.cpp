#include "nostoform.h"
#include "ui_nostoform.h"
#include "menupage.h"
#include "mysingleton.h"
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

void NostoForm::on_lineEditMuuSumma_textChanged(const QString &arg1)
{
    nostosumma= ui->lineEditMuuSumma->text();
}

void NostoForm::on_btnVahvista_clicked()
{
    QString SaldoAccount;

    MySingleton *cardtype = MySingleton::getInstance(); //move cardID

    SaldoAccount=cardtype->getAccountID();

    if(SaldoAccount == "440")
    {
        SaldoAccount = "111";
    }


                                     //Check reply to balance query & compare if can withdraw

    QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9auai00/pankki/ci_restapi-master/ci_restapi-master/index.php/api/account/otto?id="+SaldoAccount));
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



        QJsonObject json;
                json.insert("idAccount", SaldoAccount);
                json.insert("Balance", nostosumma);




    QString tester;

        foreach(const QJsonValue &value, jsarr){
            QJsonObject test = value.toObject();
            tester+=  test["Balance"].toString();

            if(nostosumma >= tester) {
                ui->labelNostoStatus->setText("Kate ei riitä! ");

            }
            else{
            float Balance;

            Balance = tester.toFloat() - nostosumma.toFloat();


           ui->labelNostoStatus->setNum(Balance);
            }



        }

}

void NostoForm::on_btnStop_clicked()                           //close Nosto + Open Menu 
{
    this->close();

    MenuPage *mpp= new MenuPage();
    mpp ->show();


}


