#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnShow, &QPushButton::clicked, this, &MainWindow::showCarsSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSave_clicked()
{
    QString brand=ui->textBrand->text();
    QString model=ui->textModel->text();
    int yearModel=ui->textYearModel->text().toInt();
    Car objectCar(brand,model,yearModel);
    carList.append(objectCar);
}

void MainWindow::showCarsSlot()
{
    auto *tableModel = new QStandardItemModel(carList.size(), 3, this);

    tableModel->setHorizontalHeaderLabels({ tr("Merkki"), tr("Malli"), tr("Vuosimalli") });
    for(int x=0; x<carList.size(); x++){
        const Car &objectCar = carList[x];
        tableModel->setItem(x, 0, new QStandardItem(objectCar.getBrand()));
        tableModel->setItem(x, 1, new QStandardItem(objectCar.getModel()));
        tableModel->setItem(x, 2, new QStandardItem(QString::number(objectCar.getYearModel())));
        //qDebug()<<carList[x].getBrand()<<" "<<carList[x].getModel();
    }
    ui->tableCars->setModel(tableModel);
    ui->tableCars->verticalHeader()->setVisible(false);
    ui->tableCars->resizeColumnsToContents();
}

