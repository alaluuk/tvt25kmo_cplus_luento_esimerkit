#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address
{
private:
    string street;
    string postalCode;
    string city;
public:
    Address();
    Address(string, string, string);
    void tulostaOsoite();
    ~Address();
};

#endif // ADDRESS_H
