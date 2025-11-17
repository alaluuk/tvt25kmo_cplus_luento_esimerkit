#include "person.h"


Person::Person(string n, string s, string p, string c) {
    name=n;
    this->objectAddress.setStreet(s);
    this->objectAddress.setPostalCode(p);
    this->objectAddress.setCity(c);
}

void Person::printData()
{
    cout<<"Nimi="<<name<<endl;
    cout<<"Katuosoite="<<this->objectAddress.getStreet()<<endl;
    cout<<"Postinumero="<<this->objectAddress.getPostalCode()<<endl;
    cout<<"Kaupunki="<<this->objectAddress.getCity()<<endl;
    cout<<"__________________________________"<<endl;
}

Person::~Person()
{
   // cout<<"Person olio tuhottiin"<<endl;
}
