#include "tuote.h"

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    Tuote objTuote1("Televisio",520.50);
    Tuote objTuote2("Puhelin",550.99);
    Tuote objTuote3("Kahvinkeitin",45.50);

    vector<Tuote> tuoteLista;
    tuoteLista.push_back(objTuote1);
    tuoteLista.push_back(objTuote2);
    tuoteLista.push_back(objTuote3);
    //Ensimmäinen alkio
    cout<<"Eka alkio\n";
    tuoteLista[0].tulostaTiedot();
    cout<<"Kaikki listan alkiot\n";
    for(int x=0; x<2; x++){
        tuoteLista[x].tulostaTiedot();
    }
    cout<<"Listassa alkiota="<<tuoteLista.size()<<endl;

    cout<<"toinen for tapa\n";
    for(Tuote alkio: tuoteLista){
        alkio.tulostaTiedot();
    }
    return 0;
}
