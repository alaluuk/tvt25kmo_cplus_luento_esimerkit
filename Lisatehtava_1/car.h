#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;
class Car
{
private:
    string make;
    string model;
    int year;

public:
    Car();
    Car(string, string, int);
    //kolmas konstruktori
    Car(string, string);
    void display();
    //kirjoitetaan destruktori
    ~Car();

    //make muuttujan Getter ja Setter
    string getMake() const;
    void setMake(const string &newMake);

    //model muuttujan Getter ja Setter
    string getModel() const;
    void setModel(const string &newModel);

    //year muuttujan Getter ja Setter
    int getYear() const;
    void setYear(int newYear);
};

#endif // CAR_H
