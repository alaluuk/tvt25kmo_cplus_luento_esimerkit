#include "car.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);

    Car *objectCar1=new Car("Toyota","Carina",2022);
    objectCar1->display();
    //muista tuhota dynaamiset oliot
    delete objectCar1;
    objectCar1=nullptr;

    //smart pointer
    unique_ptr<Car> objectCar2 = make_unique<Car>("Volvo","XC40",2023);
    objectCar2->display();

    return 0;
}
