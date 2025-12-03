#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
private:
    static Person* instance;
    QString name;
    Person();
    Person( const Person&)=delete;
    Person& operator=(const Person&)=delete;
public:
    static Person* getInstance();
    QString getName() const;
    void setName(const QString &value);

};

#endif // PERSON_H
