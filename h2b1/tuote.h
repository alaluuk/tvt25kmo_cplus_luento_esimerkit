#ifndef TUOTE_H
#define TUOTE_H

#include <iostream>


class Tuote
{
private:
    std::string nimi;
    double hinta;
public:
    Tuote(std::string, double);
    std::string getNimi() const;
    void setNimi(const std::string &newNimi);
    double getHinta() const;
    void setHinta(double newHinta);
    void tulostaTiedot();
};

#endif // TUOTE_H
