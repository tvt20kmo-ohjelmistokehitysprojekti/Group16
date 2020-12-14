#include "mysingleton.h"


MySingleton* MySingleton::instance = nullptr;

MySingleton* MySingleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new MySingleton();
    }

    return instance;
}

QString MySingleton::getAccountID() const
{
    return AccountID;
}

void MySingleton::setAccountID(const QString &value)
{
    AccountID = value;
}
QString MySingleton::getCardtype() const
{
    return Cardtype;
}

void MySingleton::setCardtype(const QString &value)
{
    Cardtype = value;
}

