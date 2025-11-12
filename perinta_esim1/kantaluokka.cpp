#include "kantaluokka.h"
#include<iostream>
using namespace std;

void Kantaluokka::setPrivateNumber(int newPrivateNumber)
{
    privateNumber = newPrivateNumber;
}

int Kantaluokka::getPrivateNumber() const
{
    return privateNumber;
}

Kantaluokka::Kantaluokka() {
    cout<<"Kantaluokan olio luotiin"<<endl;
}
