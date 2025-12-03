#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "person.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Person *objectSingleton;

private slots:
    void openForm1();
    void openForm2();
    void setName();
};
#endif // MAINWINDOW_H
