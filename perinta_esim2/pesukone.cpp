#include "pesukone.h"

Pesukone::Pesukone(string n, double h, int l, int m): Tuote(n,h) {
    linkousNopeus=l;
    maxPyykki=m;
}

void Pesukone::tulostaTiedot()
{
    cout<<" Tuote="<<this->getNimi()<<", hinta="<<this->getHinta();
    cout<<", linkousnopeus="<<linkousNopeus<<" ,max pyykin paino="<<maxPyykki<<endl;

}
