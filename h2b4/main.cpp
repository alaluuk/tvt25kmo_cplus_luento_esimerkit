#include "tuote.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Tuote> tuoteLista;

    tuoteLista.emplace_back("Lapio",5000);
    tuoteLista.emplace_back("Kahvikuppi",12);
    tuoteLista.emplace_back("TV",500);
    tuoteLista.emplace_back("Sohva",1500);
    tuoteLista.emplace_back("Hiiri",45);

    // //asetetaan aluksi kalleimmaksi eka alkion hinta
    // double kallein=tuoteLista[0].getHinta();
    // int indeksi_kallein=1;

    // for(Tuote alkio:tuoteLista){
    //     if(alkio.getHinta() > kallein){
    //         kallein=alkio.getHinta();
    //         indeksi_kallein++;
    //     }
    // }
    // cout<<"Kallein tuote="<<tuoteLista[indeksi_kallein].getNimi()<<endl;
    // cout<<"sen hinta="<<kallein<<endl;

    //toinen tapa
    double kallein=tuoteLista[0].getHinta();
    int indeksi_kallein=0;
    for (int x=1; x<tuoteLista.size(); x++){
        if(tuoteLista[x].getHinta() > kallein){
            kallein=tuoteLista[x].getHinta();
            indeksi_kallein = x;
        }
    }
    cout<<"Kallein tuote="<<tuoteLista[indeksi_kallein].getNimi()<<endl;
    cout<<"sen hinta="<<tuoteLista[indeksi_kallein].getHinta()<<endl;
    return 0;
}
