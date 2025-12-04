#ifndef FORM1_H
#define FORM1_H

#include "person.h"

#include <QDialog>

namespace Ui {
class Form1;
}

class Form1 : public QDialog
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();

private:
    Ui::Form1 *ui;
private slots:
    void setNameSlot();
    void getNameSlot();
};

#endif // FORM1_H
