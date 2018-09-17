#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <qdebug.h>


using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("communesFR.db");
    bool ok = db1.open();

    QSqlQuery query ("SELECT NCC FROM France2016");
    while (query.next())
    {
        QString ville = query.value(0).toString();
        qDebug()<<ville;

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
