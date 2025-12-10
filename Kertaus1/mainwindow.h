#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "car.h"

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

private slots:
    void on_btnSave_clicked();
    void showCarsSlot();

private:
    Ui::MainWindow *ui;
    QVector<Car> carList;
};
#endif // MAINWINDOW_H
