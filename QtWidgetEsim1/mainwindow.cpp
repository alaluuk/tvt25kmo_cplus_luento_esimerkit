#include "mainwindow.h"
#include "page2.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnTest2, &QPushButton::clicked, this, &MainWindow::btnTest2_clicked);
    connect(ui->btnOpenPage2, &QPushButton::clicked, this, &MainWindow::openPage2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTest1_clicked()
{
    qDebug()<<"Klikkasit Test1 painiketta";
    ui->labelResult->setText("Klikkasit Test1 painiketta");

}

void MainWindow::btnTest2_clicked()
{
    name=ui->textName->text();
    ui->labelResult->setText("Terve "+name);
}

void MainWindow::openPage2()
{
    objectPage2=new Page2(this);
    objectPage2->setFname(name);
    connect(objectPage2, &Page2::nameSetted, this, &MainWindow::showNameFromPage2);
    objectPage2->open();
}

void MainWindow::showNameFromPage2()
{
    QString fname=objectPage2->getFname();
    ui->textName->setText(fname);
}

