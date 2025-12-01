#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnTest2, &QPushButton::clicked, this, &MainWindow::btnTest2_clicked);
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
    QString name=ui->textName->text();
    ui->labelResult->setText("Terve "+name);
}

