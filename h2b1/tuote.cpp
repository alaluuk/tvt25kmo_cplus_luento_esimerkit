#include "tuote.h"

Tuote::Tuote(std::string n, double h)
{
    this->nimi=n;
    this->hinta=h;
}

std::string Tuote::getNimi() const
{
    return nimi;
}

void Tuote::setNimi(const std::string &newNimi)
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
    std::cout<<"nimi="<<nimi<<" hinta="<<hinta<<std::endl;
}
