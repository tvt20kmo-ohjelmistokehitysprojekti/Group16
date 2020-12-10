#ifndef USER_H
#define USER_H

#include <QString>



class User
{
public:
    User();
    QString getTiliValinta() const;
    void setTiliValinta(const QString &value);

    QString getFirstName() const;
    void setFirstName(const QString &value);

    QString getLastName() const;
    void setLastName(const QString &value);



    QString getBookID() const;
    void setBookID(const QString &value);

    QString getDate() const;
    void setDate(const QString &value);

private:
    QString TiliValinta;
    QString FirstName, LastName, BookID, Date;
};

#endif // USER_H
