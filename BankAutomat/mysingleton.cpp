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
