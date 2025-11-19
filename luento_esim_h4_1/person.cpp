#include "person.h"

Person::Person(string n) {
    name=n;
    //1-tehtävä
    // objAddress=Address("Uusikatu 4","90100","Oulu");
    //2-tehtävä
    objAddress=make_unique<Address>("Uusikatu 4","90100","Oulu");
}

void Person::tulostaTiedot()
{
    cout<<"Nimi="<<name<<endl;
    //1-tehtävä
    //this->objAddress.tulostaOsoite();
    //2-tehtävä
    this->objAddress->tulostaOsoite();
}

Person::~Person()
{
    cout<<"Person olio tuhottiin\n";
}
