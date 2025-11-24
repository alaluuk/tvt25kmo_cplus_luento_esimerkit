#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "ianimal.h"

using namespace std;
class Dog : public IAnimal
{
public:
    Dog();

    // IAnimal interface
public:
    void sayName();
};

#endif // DOG_H
