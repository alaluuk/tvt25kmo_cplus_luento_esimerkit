#include "person.h"

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    Person objectPerson("Teppo Testi","Uusikatu 2","90100", "Oulu");
    objectPerson.printData();
    //vektori
    vector<Person> personList;
    personList.emplace_back("Teppo Testi","Uusikatu 2","90100", "Oulu");
    personList.emplace_back("Liisa Joki","Uusikatu 4","90100", "Oulu");
    personList.emplace_back("Aino Virta","Ratakatu 2","00100", "Helsinki");
    cout<<"Lista"<<endl;
    for(Person obj: personList){
        obj.printData();
    }
    return 0;
}
