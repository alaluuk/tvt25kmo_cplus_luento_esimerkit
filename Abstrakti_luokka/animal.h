#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class Animal
{
private:
    string color;
public:
    Animal();
    string getColor() const;
    void setColor(const string &newColor);
    void virtual sound()=0;
    //~Animal();
    virtual ~Animal();
};

#endif // ANIMAL_H
