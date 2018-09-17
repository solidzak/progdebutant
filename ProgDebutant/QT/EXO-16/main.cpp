#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <qdebug.h>
#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

  QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
   db1.setDatabaseName("mabase.db");
   bool ok = db1.open();


    //QString filname="france2016.txt";
    QFile file("france2016.txt");

    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&file);
    int cpt;
    QString ligne;

    while (!flux.atEnd())
    {
        ligne = flux.readAll();
        qDebug()<<ligne.split('\t');
        cpt++;

    }

    cout<<cpt<<endl;


    return a.exec();
}
