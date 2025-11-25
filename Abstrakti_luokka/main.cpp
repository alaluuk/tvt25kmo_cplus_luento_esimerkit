#include "animal.h"
#include "cat.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    //Ei voida luoda Animal oliota, koska
    //Animal luokassa on puhdas virtuaalifunktio
    //eli Animal luokka on abstrakti luokka
    //Animal objAnimal;
    // Cat objectCat;
    // objectCat.setName("Karvinen");
    // cout<<objectCat.getName()<<" sanoo: ";
    // objectCat.sound();
    // objectCat.sayName();

    // Dog objectDog;
    // objectDog.sayName();

    //tässä tulee ongelma, jos Animal luokan tuhoaja
    //ei ole virtuaalinen
    cout<<"Tuhotaanko varmasti cat olio?"<<endl;
    Animal *objCat2=new Cat();
    objCat2->sound();
    delete objCat2;
    objCat2=nullptr;

    return 0;
}
