#include "pesukone.h"
#include "televisio.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Tuote objTuote("Sohva",999.99);
    Televisio objTelevisio("TV",850,55);
    Pesukone objPesukone("Pyykikone",950.99,1400, 10);
    objTuote.tulostaTiedot();
    objTelevisio.tulostaTiedot();
    objPesukone.tulostaTiedot();

    vector<Televisio> tvLista;
    tvLista.emplace_back("LG TV",999,55);
    tvLista.emplace_back("Samsug TV",800,50);
    tvLista.emplace_back("Finlux",888,55);

    cout<<"Televisio lista:"<<endl;
    for(Televisio tv: tvLista){
        tv.tulostaTiedot();
    }

    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objPesukone);
    tuoteLista.push_back(&objTelevisio);

    cout<<"Tuote lista:"<<endl;
    for(auto tuote: tuoteLista){
        tuote->tulostaTiedot();
    }

    return 0;
}
