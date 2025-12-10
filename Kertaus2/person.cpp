#include "person.h"

Person Person::mapJson(const QJsonObject &json)
{
    Person person;
    person.id = json["id"].toInt();
    person.firstname = json["firstname"].toString();
    person.lastname = json["lastname"].toString();
    return person;
}
