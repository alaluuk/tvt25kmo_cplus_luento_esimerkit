#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string n) : name(n) {
    cout << "Koira " << name << " luotiin" << endl;
}

Dog::~Dog() {
    cout << "Koira " << name << " tuhotaan" << endl;
}

void Dog::bark() {
    cout << name << " haukkuu!" << endl;
}
