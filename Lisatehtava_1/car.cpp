#include "car.h"

string Car::getMake() const
{
    return make;
}

void Car::setMake(const string &newMake)
{
    make = newMake;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYear() const
{
    return year;
}

void Car::setYear(int newYear)
{
    if(newYear>1885){
       year = newYear;
    }
    else {
        cout<<"Vuosimallin tulee olla suurempi kuin 1885"<<endl;
        year=0;
    }
}

Car::Car() {}

Car::Car(string make, string model, int year)
{
    this->make=make;
    this->model=model;
    //this->year=year;
    //jotta vuoden 1885 tarkistus tehdään
    this->setYear(year);
}

Car::Car(string make, string model)
{
    this->make=make;
    this->model=model;
    this->year=2020;
}

void Car::display()
{
    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki:"<<this->make<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Vuosimalli: "<<this->year<<endl;
    cout<<"*********************"<<endl;
}

Car::~Car()
{
    // cout<<"Olio tuhottiin!"<<endl;
    // cout<<"*********************"<<endl;
}
