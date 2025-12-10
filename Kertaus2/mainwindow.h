#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "person.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

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
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QByteArray response_data;
    QVector<Person> personList;
private slots:
    void getPersonSlot();
    void showPersonSlot();
    void personsToListSlot();
};
#endif // MAINWINDOW_H
