#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objectHenkilo;
    objectHenkilo.setNimi("Teppo Testi");
    objectHenkilo.setIka(32);
    objectHenkilo.tulostaTiedot();

    system("pause");
    return 0;
}
