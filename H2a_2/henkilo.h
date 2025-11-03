#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>

using namespace std;
class Henkilo
{
private:
    int ika;
    string nimi;
public:
    Henkilo();
    int getIka() const;
    void setIka(int newIka);
    string getNimi() const;
    void setNimi(const string &newNimi);
    void tulostaTiedot();
};

#endif // HENKILO_H
