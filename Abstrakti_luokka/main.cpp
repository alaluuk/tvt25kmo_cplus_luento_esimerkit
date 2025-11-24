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
    Cat objectCat;
    objectCat.setName("Karvinen");
    cout<<objectCat.getName()<<" sanoo: ";
    objectCat.sound();
    objectCat.sayName();

    Dog objectDog;
    objectDog.sayName();
    return 0;
}
