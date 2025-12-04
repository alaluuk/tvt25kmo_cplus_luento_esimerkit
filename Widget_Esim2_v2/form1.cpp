#include "form1.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
    connect(ui->btnSetName, &QPushButton::clicked, this, &Form1::setNameSlot);
    connect(ui->btnShowName, &QPushButton::clicked, this, &Form1::getNameSlot);
}

Form1::~Form1()
{
    delete ui;
}

void Form1::setNameSlot()
{
    Person& objectSingleton=Person::getInstance();
    objectSingleton.setName(ui->textName->text());
}

void Form1::getNameSlot()
{
    Person& objectSingleton=Person::getInstance();
    ui->labelName->setText(objectSingleton.getName());
}
