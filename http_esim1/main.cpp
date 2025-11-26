#include "httpperson.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpPerson *objHttpPerson=new HttpPerson(&a);
    qDebug()<<"Kaikki henkilöt";
    objHttpPerson->getPersonsData();
    // qDebug()<<"Eka henkilö";
    // objHttpPerson->getOnePersonData();
    return a.exec();
}
