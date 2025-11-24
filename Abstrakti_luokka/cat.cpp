#include "cat.h"

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

Cat::~Cat()
{
    cout<<"Cat olio tuhottiin\n";
}

void Cat::sayName()
{
    cout<<"Nimeni on "<<name<<endl;
}

Cat::Cat() {}

void Cat::sound()
{
    cout<<"Miauu!"<<endl;
}
