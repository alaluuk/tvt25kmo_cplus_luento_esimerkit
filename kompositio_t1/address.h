#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
using namespace std;
class Address
{
private:
    string street;
    string postalCode;
    string city;
public:
    Address();
    string getStreet() const;
    void setStreet(const string &newStreet);
    string getPostalCode() const;
    void setPostalCode(const string &newPostalCode);
    string getCity() const;
    void setCity(const string &newCity);

    ~Address();
};

#endif // ADDRESS_H
