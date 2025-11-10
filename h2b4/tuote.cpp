#include "tuote.h"


Tuote::Tuote(string ni, double hi) {
    nimi=ni;
    hinta=hi;
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
    cout<<"Nimi="<<nimi<<" Hinta="<<hinta<<endl;
}

string Tuote::getNimi() const
{
    return nimi;
}

void Tuote::setNimi(const string &newNimi)
{
    nimi = newNimi;
}
