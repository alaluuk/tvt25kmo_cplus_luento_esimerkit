#include "person.h"


Person::Person() {}

Person &Person::getInstance()
{
    static Person instance;
    return instance;
}


QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name=value;
}
