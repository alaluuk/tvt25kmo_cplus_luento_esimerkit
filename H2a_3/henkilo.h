#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>

using namespace std;
class Henkilo
{
private:
    int age;
    string name;
public:
    Henkilo(string, int);
    Henkilo();
    int getAge() const;
    void setAge(int newAge);
    string getName() const;
    void setName(const string &newName);
    void printData();
};

#endif // HENKILO_H
