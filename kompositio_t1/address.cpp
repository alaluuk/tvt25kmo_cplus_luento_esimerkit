#include "address.h"

string Address::getStreet() const
{
    return street;
}

void Address::setStreet(const string &newStreet)
{
    street = newStreet;
}

string Address::getPostalCode() const
{
    return postalCode;
}

void Address::setPostalCode(const string &newPostalCode)
{
    postalCode = newPostalCode;
}

string Address::getCity() const
{
    return city;
}

void Address::setCity(const string &newCity)
{
    city = newCity;
}

Address::~Address()
{
   // cout<<"Address olio tuhottiin"<<endl;
}

Address::Address() {}
