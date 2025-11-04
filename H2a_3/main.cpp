#define WIN32_LEAN_AND_MEAN
#define byte win_byte_override
#include <windows.h>
#include <iostream>

//Jos käytössä on c++ 17 tai uudempi kääntäjä
//tulee ongelma kun tuo windows.h ja iostream ovat molemmat
//mukana, koska molemmat määrittelevät byte:n

// Huom: nämä määrittelyt tulee olla ennen #include <windows.h>
// ------------------------------------------------------------
// Selitys määrittelyille ennen windows.h:
//
// WIN32_LEAN_AND_MEAN
//  -> Rajaa windows.h:n sisällyttämät osat minimiin.
//     Tämä nopeuttaa käännöstä ja vähentää turhia makroja
//     (esim. GDI-, OLE-, ja Socket-rajapinnat jätetään pois).
//
// byte win_byte_override
//  -> Estää windows.h:ta määrittelemästä omaa "byte"-tyyppiä
//     (typedef unsigned char byte;), joka on ristiriidassa
//     C++17-standardin std::byte-tyypin kanssa.
//     Näin vältetään virhe "reference to 'byte' is ambiguous".
//
// windows.h
//  -> Sisältää Windows API -funktiot (esim. SetConsoleOutputCP).
// ------------------------------------------------------------


#include "henkilo.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Henkilo objectPerson1("Teppo Testi",28);
    objectPerson1.printData();

    //jos haluat että olion voi luoda myös kuten alla
    //on Henkilo luokkaan lisättävä myös tyhjä konstruktori
    Henkilo objectPerson2;
    objectPerson2.setName("Liisa Joki");
    objectPerson2.setAge(21);
    objectPerson2.printData();

    //dynaaminen olio
    Henkilo *objectPerson3=new Henkilo("Aino Virta",34);
    objectPerson3->printData();
    delete objectPerson3;
    objectPerson3=nullptr;

    system("pause");
    return 0;
}

