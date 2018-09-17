#include <QCoreApplication>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QSqlError>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename="/home/zakaria/Projets/ProgDebutant/QT/build-Exo-16-Desktop_Qt_5_11_1_clang_64bit-Debug/france2016.txt";
    QFile file(filename);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&file);
    QString ligne;


    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("france.db");
    bool ok = db.open();
    qDebug()<<ok;






//ligne = flux.readLine().toLatin1();
ligne = QString::fromLatin1(file.readLine());
ligne.chop(1);
qDebug()<<ligne;
qDebug()<<"CREATE TABLE commune ("+ligne.split('\t').join(" TXT,")+" TXT)";



QSqlQuery  query1("CREATE TABLE commune ("+ligne.split('\t').join(" TXT,")+" TXT)");
qDebug()<<query1.lastError();

db.transaction();


    while(! flux.atEnd())
    {
        ligne = QString::fromLatin1(file.readLine());
        ligne.chop(1);
        //traitement de la ligne
       QSqlQuery  query2("INSERT INTO commune VALUES ('"+ligne.split("\t").join("','")+"')");
       qDebug()<<"INSERT INTO commune VALUES ('"+ligne.split("\t").join("','")+"')";
    }

db.commit();


return a.exec();

}
