#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog {
private:
    string name;
public:
    Dog(string n);
    ~Dog();
    void bark();
};

#endif // DOG_H
