#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <MyMathLibrary.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCalculate_clicked()
{
    int number=ui->textNumber->text().toInt();
    try {
        int result=MyMathLibrary::factor(number);
        qDebug()<<result;
    } catch (std::runtime_error& e) {
        qDebug()<<e.what();
    }


}

