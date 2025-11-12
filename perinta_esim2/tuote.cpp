#include "tuote.h"

string Tuote::getNimi() const
{
    return nimi;
}

void Tuote::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

double Tuote::getHinta() const
{
    return hinta;
}

void Tuote::setHinta(double newHinta)
{
    hinta = newHinta;
}

void Tuote::tulostaTiedot()
{
    cout<<" Tuote="<<nimi<<", hinta="<<hinta<<endl;
}

Tuote::Tuote(string n, double h) {
    nimi=n;
    hinta=h;
}
