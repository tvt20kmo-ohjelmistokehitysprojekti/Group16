#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <qstring.h>



class MySingleton
{
private:

    static MySingleton* instance;
    QString AccountID;
public:
    static MySingleton* getInstance();

    QString getAccountID() const;
    void setAccountID(const QString &value);


};

#endif // MYSINGLETON_H
