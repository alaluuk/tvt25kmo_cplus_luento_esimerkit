#include "page2.h"
#include "ui_page2.h"

Page2::Page2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Page2)
{
    ui->setupUi(this);
    connect(ui->btnSave, &QPushButton::clicked, this, &Page2::btnSave_clicked);
}

Page2::~Page2()
{
    delete ui;
}

void Page2::setFname(const QString &newFname)
{
    fname = newFname;
    ui->textFname->setText(fname);
}

void Page2::btnSave_clicked()
{
    fname=ui->textFname->text();
    nameSetted();
    qDebug()<<fname;
    this->close();
}

QString Page2::getFname() const
{
    return fname;
}
