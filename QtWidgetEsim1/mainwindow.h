#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "page2.h"

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
    void on_btnTest1_clicked();
    void btnTest2_clicked();
    void openPage2();
    void showNameFromPage2();

private:
    Ui::MainWindow *ui;
    QString name;
    Page2 *objectPage2;
};
#endif // MAINWINDOW_H
