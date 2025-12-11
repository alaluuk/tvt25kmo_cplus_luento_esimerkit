#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnGetPersons, &QPushButton::clicked, this, &MainWindow::getPersonSlot);
    connect(ui->btnShowPersons, &QPushButton::clicked, this, &MainWindow::personsToListSlot);
    ui->btnShowPersons->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getPersonSlot()
{
    QString site_url="https://peatutor.com/json_example/index.php";
    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //luo manager konstruktorissa, jos sinulla on monta requestia sovelluksessa
    manager = new QNetworkAccessManager(this);

    reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &MainWindow::showPersonSlot);
}

void MainWindow::showPersonSlot()
{
    // Tarkistetaan verkkovirheet
    if (reply->error() != QNetworkReply::NoError) {
        qWarning() << "Network error:" << reply->errorString();
        reply->deleteLater();
        //manager->deleteLater() poistettu turhana;
        return;
    }

    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    // Muunnetaan vastaus QByteArray-tyyppisestä JSON-dokumentiksi
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    // Muunnetaan JSON-dokumentti JSON-arrayksi
    QJsonArray json_array = json_doc.array();
    // Käsitellään JSON-arraytä


    for (const QJsonValue &value : json_array) {
        if (value.isObject()) {
            Person person = Person::mapJson(value.toObject());
            qDebug()<<"TEST1:"<<person.firstname;
            personList.append(person);
        }
    }
    //personsToListSlot();
    ui->btnShowPersons->setEnabled(true);
    reply->deleteLater();
    //manager->deleteLater() poistettu turhana;
}

void MainWindow::personsToListSlot()
{
    auto *tableModel = new QStandardItemModel(personList.size(), 3, this);

    tableModel->setHorizontalHeaderLabels({ tr("ID"), tr("Etunimi"), tr("Sukunimi") });

    for (int row = 0; row < personList.size(); ++row) {
        const Person &person = personList[row];
        tableModel->setItem(row, 0, new QStandardItem(QString::number(person.id)));
        tableModel->setItem(row, 1, new QStandardItem(person.firstname));
        tableModel->setItem(row, 2, new QStandardItem(person.lastname));
        qDebug()<<"TEST2:"<<person.firstname;
    }

    ui->tablePersons->setModel(tableModel);
    ui->tablePersons->verticalHeader()->setVisible(false);
    ui->tablePersons->resizeColumnsToContents();
}
