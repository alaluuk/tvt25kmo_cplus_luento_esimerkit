#include "student.h"
#include "tuote.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    int kallein;
    vector<Tuote> tuoteLista;
    tuoteLista.emplace_back(25,"t1");
    tuoteLista.emplace_back(22,"t2");
    tuoteLista.emplace_back(32,"t3");
    tuoteLista.emplace_back(19,"t4");

    // kallein=tuoteLista[0].getHinta();
    // int x=1;
    // for(const Tuote &nyt: tuoteLista ){
    //     if(nyt.getHinta() > kallein){
    //         kallein=nyt.getHinta();
    //         x++;
    //     }
    // }
    //cout<<"kallein="<<tuoteLista[x].getNimi()<<" hinta= "<<tuoteLista[x].getHinta()<<endl;

    int kalleimman_indeksi=0;
    for(int x=1; x<=3; x++ ){
        if(tuoteLista[x].getHinta() > tuoteLista[kalleimman_indeksi].getHinta()){
            kalleimman_indeksi=x;
        }
    }
    cout<<"kallein="<<tuoteLista[kalleimman_indeksi].getNimi()<<" hinta= "<<tuoteLista[kalleimman_indeksi].getHinta()<<endl;






    return 0;
}
