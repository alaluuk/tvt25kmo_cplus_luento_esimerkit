#include "form2.h"

#include "ui_form2.h"

Form2::Form2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form2)
{
    ui->setupUi(this);
    connect(ui->btnShowName,&QPushButton::clicked, this,&Form2::getNameSlot);
    connect(ui->btnSetName, &QPushButton::clicked, this, &Form2::setNameSlot);
    objectSingleton = Person::getInstance();
}

Form2::~Form2()
{
    delete ui;
    delete objectSingleton;
    objectSingleton=nullptr;
}

void Form2::getNameSlot()
{
    ui->labelName->setText(objectSingleton->getName());
}

void Form2::setNameSlot()
{
    objectSingleton->setName(ui->textName->text());
}
