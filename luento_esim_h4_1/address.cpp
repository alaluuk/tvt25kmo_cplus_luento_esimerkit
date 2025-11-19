#include "address.h"

Address::Address() {}

Address::Address(string s, string p, string c)
{
    street=s;
    postalCode=p;
    city=c;
}

void Address::tulostaOsoite()
{
    cout<<"Osoite="<<street<<" "<<postalCode<<" "<<city<<endl;
}

Address::~Address()
{
    cout<<"Osoite olio tuhottiin\n";
}
