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
           Name+= event["name"].toString()    +"\r ";

           QString Author;
           foreach(const QJsonValue &value, jsarr){
              QJsonObject event = value.toObject();
              Author+= event["author"].toString()    +"\r ";

              QString book_id;
              foreach(const QJsonValue &value, jsarr){
                 QJsonObject event = value.toObject();
                 book_id+= event["book_id"].toString()    +"\r ";


//idHappenings Date Balance





QList<User*> UserList;  //In progress. tricky things
User User_1, User_2, User_3;

UserList.append(&User_1);
UserList.append(&User_2);
UserList.append(&User_3);

User_1.setFirstName(Name);
User_1.setLastName(Author);
User_1.setBookID(book_id);



    User_2.setFirstName(Name);
    User_2.setLastName(Author);
    User_2.setBookID(book_id);


        User_3.setFirstName(Name);
        User_3.setLastName(Author);
        User_3.setBookID(book_id);


QStandardItemModel *table_model = new QStandardItemModel(UserList.size(),3);
table_model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tapahtuma ID"));
table_model->setHeaderData(1, Qt::Horizontal, QObject::tr("Summa"));
table_model->setHeaderData(2, Qt::Horizontal, QObject::tr("More Info"));

for (int row = 0; row < UserList.size(); ++row) {
        QStandardItem *name = new QStandardItem((UserList[row]->getFirstName()));
        table_model->setItem(row, 0, name);
        QStandardItem *author = new QStandardItem((UserList[row]->getLastName()));
        table_model->setItem(row, 1, author);
        QStandardItem *bookid = new QStandardItem((UserList[row]->getBookID()));
        table_model->setItem(row, 2, bookid);

}

ui->tableTapahtumat->setModel(table_model);

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
