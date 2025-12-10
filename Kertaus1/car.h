#ifndef CAR_H
#define CAR_H

#include <QString>


class Car
{
public:
    Car(QString, QString, int);
    QString getBrand() const;

    QString getModel() const;

    int getYearModel() const;

private:
    QString brand;
    QString model;
    int yearModel;

};

#endif // CAR_H
