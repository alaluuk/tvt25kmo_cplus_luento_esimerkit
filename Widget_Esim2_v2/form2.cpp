#include "form2.h"

#include "ui_form2.h"

Form2::Form2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form2)
{
    ui->setupUi(this);
    connect(ui->btnShowName,&QPushButton::clicked, this,&Form2::getNameSlot);
    connect(ui->btnSetName, &QPushButton::clicked, this, &Form2::setNameSlot);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::getNameSlot()
{
    Person& objectSingleton=Person::getInstance();
    ui->labelName->setText(objectSingleton.getName());
}

void Form2::setNameSlot()
{
    Person& objectSingleton=Person::getInstance();
    objectSingleton.setName(ui->textName->text());
}
