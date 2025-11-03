#include "henkilo.h"

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

string Henkilo::getNimi() const
{
    return nimi;
}

void Henkilo::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

void Henkilo::tulostaTiedot()
{
    cout<<"nimi="<<nimi<<" ika="<<ika<<endl;
}

Henkilo::Henkilo() {}
