#include "pesukone.h"
#include "televisio.h"

#include <iostream>
#include <memory>
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

    // Lista sisältää vain Televisio-luokan olioita
    // Oliot voidaan luoda suoraan listaan emplace_back():llä
    vector<Televisio> tvLista;
    tvLista.emplace_back("LG TV",999,55);
    tvLista.emplace_back("Samsug TV",800,50);
    tvLista.emplace_back("Finlux",888,55);

    cout<<"Televisio lista:"<<endl;
    for(Televisio tv: tvLista){
        tv.tulostaTiedot();
    }

    // Lista sisältää eri luokkien olioita (polymorfismi)
    // Listaan tallennetaan osoittimet olioihin
    // Jos listaan tallennettaisiin oliot suoraan, tapahtuisi object slicing
    cout<<"Tuotelista"<<endl;
    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objPesukone);
    tuoteLista.push_back(&objTelevisio);

    //auto sanan ansiosta kääntäjä tunnistaa olion luokan
    for(auto tuote: tuoteLista){
        tuote->tulostaTiedot();
    }

    // Vektori sisältää unique_ptr:iä polymorfismin mahdollistamiseksi
    // Ilman pointteria tapahtuisi object slicing (aliluokan tiedot katoaisivat)
    vector<unique_ptr<Tuote>> tuoteVektori;
    tuoteVektori.emplace_back(make_unique<Tuote>("Tuoli",99));
    tuoteVektori.emplace_back(make_unique<Televisio>("Samsung",800,55));
    tuoteVektori.emplace_back(make_unique<Pesukone>("AEG",1200.99,1400,10));

    cout<<"Smart pointer esimerkki"<<endl;
    for(auto& olio: tuoteVektori){
        olio->tulostaTiedot();
    }

    return 0;
}
