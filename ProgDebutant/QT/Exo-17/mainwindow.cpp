#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mabase.db");
    //bool ok = db.open();
    //qDebug()<<ok;




    model = new QSqlTableModel();
    model->setTable("france2016");
    model->select();





    ui->tableView->setModel(model);
    //ui->comboBox_departement->setModel(model);

    QSqlQuery query("SELECT DISTINCT DEP FROM france2016 ORDERBY ");
    ui->comboBox_departement->addItem("ALL");
    while (query.next())
    {
    ui->comboBox_departement->addItem(query.value(0).toString());
    }

    connect (ui->tableView,SIGNAL(pressed(QModelIndex)),
    this, SLOT (AfficheInfo(QModelIndex)));

    connect (ui->comboBox_departement,SIGNAL(currentTextChanged(QString)),
    this, SLOT (affichage_ville(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AfficheInfo( QModelIndex ind)
{
QString val;
val=ind.data().toString();
ui->lineEdit->setText(val);
//ui->comboBox_departement->set
//val=ind.sibling(ind.row(),ind.column()).data().toString();
// syntaxe si on souhaite cibler sur une autre ligne colonne
}

void MainWindow::affichage_ville(QString val)
{
    int maxcol=model->columnCount();
    if (val!="ALL")
    {
        //  model->setTable("france2016");
        //  model->select();
        model->setFilter("DEP='"+val+"'");

        for (int cpt=0;cpt<maxcol;cpt++)
        {
         ui->tableView->hideColumn(cpt);
        }
        //ui->tableView->setModel(model);
        ui->tableView->showColumn(13);
        ui->tableView->selectColumn(13);
    }
    else
    {
        model->setFilter("");
        for (int cpt=0;cpt<maxcol;cpt++)
        {
         ui->tableView->showColumn(cpt);
        }
    ui->tableView->selectColumn(13);

    }






}
