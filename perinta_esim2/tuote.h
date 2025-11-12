#ifndef TUOTE_H
#define TUOTE_H
#include<iostream>

using namespace std;
class Tuote
{
private:
    string nimi;
    double hinta;
public:
    Tuote(string, double);
    string getNimi() const;
    void setNimi(const string &newNimi);
    double getHinta() const;
    void setHinta(double newHinta);
    virtual void tulostaTiedot();
};

#endif // TUOTE_H
