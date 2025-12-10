#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QJsonObject>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCalculate, &QPushButton::clicked, this, &MainWindow::sendToServer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sendToServer()
{
    QJsonObject jsonObj;
    jsonObj.insert("a",ui->textNumber1->text().toInt());
    jsonObj.insert("b",ui->textNumber2->text().toInt());

    QString site_url="http://localhost:3000/sum";
    QNetworkRequest request(site_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //luo manager konstruktorissa, jos tarvitset sitä muissa funktioissa
    manager = new QNetworkAccessManager(this);

    QJsonDocument jsonDoc(jsonObj);
    reply = manager->post(request, jsonDoc.toJson());
    connect(reply, &QNetworkReply::finished, this, &MainWindow::showResponse);
}

void MainWindow::showResponse()
{
    ui->textNumber1->setText("");
    ui->textNumber2->clear();
    ui->textNumber1->setFocus();
    response_data=reply->readAll();
    qDebug()<<response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    int result=json_obj["summa"].toInt();
    QString resultToUi = QString::number(result);
    qDebug()<<"Tulos="<<result;
    ui->labelResult->setText("Lukujen summa="+resultToUi);

    reply->deleteLater();
    manager->deleteLater();
}
