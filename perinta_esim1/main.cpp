#include "aliluokka1.h"

#include <iostream>

using namespace std;

int main()
{
    Aliluokka1 objectAliluokka;
    objectAliluokka.asetaNumerot(3,5,7);
    objectAliluokka.tulostaNumerot();

    Kantaluokka objectKantaluokka;
    //objectKantaluokka pääsee käsiksi
    //vain public tyyppisiin ominaisuuksiin
    return 0;
}
