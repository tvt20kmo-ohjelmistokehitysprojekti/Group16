#include "user.h"

User::User()
{


}

QString User::getTiliValinta() const
{
    return TiliValinta;
}

void User::setTiliValinta(const QString &value)
{
    TiliValinta = value;

}

QString User::getFirstName() const
{
    return FirstName;
}

void User::setFirstName(const QString &value)
{
    FirstName = value;
}

QString User::getLastName() const
{
    return LastName;
}

void User::setLastName(const QString &value)
{
    LastName = value;
}

QString User::getBookID() const
{
    return BookID;
}

void User::setBookID(const QString &value)
{
    BookID = value;
}

QString User::getDate() const
{
    return Date;
}

void User::setDate(const QString &value)
{
    Date = value;
}

