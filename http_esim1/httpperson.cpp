#include "environment.h"
#include "httpperson.h"
#include<QDebug>

HttpPerson::HttpPerson(QObject *parent)
    : QObject{parent}
{}

HttpPerson::~HttpPerson()
{
    qDebug()<<"HttpPerson olio tuhottiin";
}

void HttpPerson::getPersonsData()
{
    QString site_url=Environment::base_url();
    QNetworkRequest request(site_url);
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this,&HttpPerson::personDataSlot);
    reply = manager->get(request);
}

void HttpPerson::personDataSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    //qDebug()<<response_data;
    // Muunnetaan vastaus QByteArray-tyyppisestä JSON-dokumentiksi
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    // Muunnetaan JSON-dokumentti JSON-arrayksi
    QJsonArray json_array = json_doc.array();
    // Käsitellään JSON-arraytä
    for (const QJsonValue &value : json_array) {
        if (value.isObject()) {
            qDebug()<<value["firstname"].toString();
        }
    }

    reply->deleteLater();
    //manager->deleteLater() poistettu turhana;
}

void HttpPerson::getOnePersonData()
{
    QString site_url=Environment::base_url()+"/1";
    QNetworkRequest request(site_url);
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this,&HttpPerson::onePersonDataSlot);
    reply = manager->get(request);
}

void HttpPerson::onePersonDataSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    //qDebug()<<response_data;
    // Muunnetaan vastaus QByteArray-tyyppisestä JSON-dokumentiksi
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    // Muunnetaan JSON-dokumentti JSON-objektiksi
    QJsonObject json_obj = json_doc.object();
    //Tulostetaan henkilön etunimi ja sukunimi
    qDebug()<<json_obj["firstname"].toString()<<" "<<json_obj["lastname"].toString();

    reply->deleteLater();
    //manager->deleteLater() poistettu turhana;
}
