#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    //luodaan olio pinoon (stack)
    //ns. automaattinen olio
    //olio tuohoutuu automaattisesti
    Henkilo objectHenkilo;
    objectHenkilo.ika=27;
    objectHenkilo.nimi="Teppo Testi";
    cout << objectHenkilo.nimi <<" on " <<objectHenkilo.ika <<" vuotias"<<endl;

    //luodaan olio kekoon (heap)
    //meidän tulee tuhota olio, kun sitä ei tarvita
    Henkilo *objectHenkilo2;
    objectHenkilo2 = new Henkilo();
    objectHenkilo2->ika=33;
    objectHenkilo2->nimi="Liisa Joki";
    cout << objectHenkilo2->nimi <<" on " <<objectHenkilo2->ika <<" vuotias"<<endl;
    delete objectHenkilo2;
    objectHenkilo2=nullptr;

    system("pause");
    return 0;
}
