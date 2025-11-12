#ifndef TELEVISIO_H
#define TELEVISIO_H

#include "tuote.h"

class Televisio : public Tuote
{
private:
    double ruudunKoko;
public:
    Televisio(string, double, double);
    double getRuudunKoko() const;
    void setRuudunKoko(double newRuudunKoko);
    void tulostaTiedot() override;
};

#endif // TELEVISIO_H
