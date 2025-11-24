#include "animal.h"

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::~Animal()
{
    cout<<"Animal tuhottiin\n";
}

void Animal::sound()
{

}

Animal::Animal() {}
