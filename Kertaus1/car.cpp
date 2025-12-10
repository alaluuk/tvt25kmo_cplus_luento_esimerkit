#include "car.h"

Car::Car(QString b, QString m, int y) {
    brand=b;
    model=m;
    yearModel=y;
}

QString Car::getBrand() const
{
    return brand;
}

QString Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}
