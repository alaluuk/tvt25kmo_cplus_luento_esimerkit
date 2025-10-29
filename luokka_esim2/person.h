#ifndef PERSON_H
#define PERSON_H
#include<iostream>

using namespace std;
class Person
{
public:
    Person();
    int getAge() const;
    void setAge(int newAge);

    string getName() const;
    void setName(const string &newName);

private:
    int age;
    string name;
};

#endif // PERSON_H
