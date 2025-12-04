#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
private:
    QString name;
    Person();
public:
    static Person& getInstance();
    // Estä kopiointi ja sijoitus
    Person(const Person&) = delete;
    Person& operator=(const Person&) = delete;

    QString getName() const;
    void setName(const QString &value);

};

#endif // PERSON_H
