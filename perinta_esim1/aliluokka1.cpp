#include "aliluokka1.h"
#include<iostream>
using namespace std;

Aliluokka1::Aliluokka1() {
    cout<<"Aliluokan olio luotiin"<<endl;
}

void Aliluokka1::asetaNumerot(int pub, int pro, int pri)
{
    publicNumber=pub;
    protectedNumber=pro;
    //privateNumberiin ei pääse käsiksi
    //luodaan sille setter kantaluokassa
    setPrivateNumber(pri);
}

void Aliluokka1::tulostaNumerot()
{
    cout<<"Public numero="<<publicNumber<<endl;
    cout<<"Protected numero="<<protectedNumber<<endl;
    //private numeroon ei päästä käsiksi suoraan
    //luodaan sille getter
    cout<<"Private numero="<<getPrivateNumber()<<endl;
}
