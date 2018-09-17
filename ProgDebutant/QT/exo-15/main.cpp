#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <qdebug.h>

#include <QSqlError>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("mabase.db");
    bool ok = db1.open();
    if (ok!=0)
    {
        QSqlQuery query ("SELECT NCC FROM france2016");
        qDebug()<<query.lastError();
        while (query.next())
        {
            QString ville = query.value(0).toString();
            //qDebug()<<"1"<<ville;
        }

    }
    else
    {
        cout<<"base non connecter"<<endl;

    }

     return a.exec();
}

