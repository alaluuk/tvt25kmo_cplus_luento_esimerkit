#ifndef PERSON_H
#define PERSON_H

#include "address.h"


class Person
{
private:
    Address objectAddress;
    string name;
public:
    Person(string, string, string, string);
    void printData();
    ~Person();
};

#endif // PERSON_H
