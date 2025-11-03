#include "henkilo.h"

int Henkilo::getAge() const
{
    return age;
}

void Henkilo::setAge(int newAge)
{
    age = newAge;
}

string Henkilo::getName() const
{
    return name;
}

void Henkilo::setName(const string &newName)
{
    name = newName;
}

void Henkilo::printData()
{
    cout<<"nimi="<<name<<", ika="<<age<<endl;
}

Henkilo::Henkilo(string name, int a) {
    this->name=name;
    age=a;//nyt ei tarvitse this sanaa, kun muuttujilla eri nimi
    //this->name on jäsenmuuttuja name
    //name on metodin parametri
}

Henkilo::Henkilo()
{

}
