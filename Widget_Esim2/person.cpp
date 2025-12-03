#include "person.h"

// Staattisen instanssin alustaminen
Person* Person::instance = nullptr;

Person::Person() {}

Person *Person::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Person();
    }

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
