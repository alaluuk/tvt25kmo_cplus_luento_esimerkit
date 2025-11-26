#ifndef HTTPPERSON_H
#define HTTPPERSON_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class HttpPerson : public QObject
{
    Q_OBJECT
public:
    explicit HttpPerson(QObject *parent = nullptr);
    ~HttpPerson();
    void getPersonsData();
    void getOnePersonData();

private:
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QByteArray response_data;

signals:

    private slots:
    void personDataSlot(QNetworkReply *reply);
    void onePersonDataSlot(QNetworkReply *reply);
};

#endif // HTTPPERSON_H
