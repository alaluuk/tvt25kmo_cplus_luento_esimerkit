#include "student.h"
#include "tuote.h"
#include "pesukone.h"
#include "televisio.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    // vector<unique_ptr<Tuote>> tuoteLista;
    // tuoteLista.emplace_back(make_unique<Tuote>(500, "Sohva"));
    // tuoteLista.emplace_back(make_unique<Televisio>(600, "TV", 55.5));
    // tuoteLista.emplace_back(make_unique<Pesukone>(1300, "Pesukarhu", 1600, 9));

    // for (auto& alkio : tuoteLista) {
    //     alkio->tulostaTiedot();
    // }

    Tuote objTuote(500, "Sohva");
    Televisio objTelevisio(600, "TV", 55.5);
    Pesukone objPesukone(1300, "Pesukarhu", 1600, 9);

    vector<Tuote*> tuoteLista;
    tuoteLista.push_back(&objTuote);
    tuoteLista.push_back(&objTelevisio);
    tuoteLista.push_back(&objPesukone);

    for (auto alkio : tuoteLista) {
        alkio->tulostaTiedot();
    }

    return 0;
}
