#ifndef PERSON_H
#define PERSON_H
#include <qjsonobject.h>

class Person
{
public:
    int id;
    QString firstname;
    QString lastname;

    static Person mapJson(const QJsonObject &json);
};

#endif // PERSON_H
