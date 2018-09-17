#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    connect (ui->comboBox_prenom, SIGNAL(currentTextChanged(QString )),
    this,SLOT(AfficheAge(QString)));


    Prenom ["Zakaria"]=30;
    Prenom ["Julien"]=32;
    Prenom ["richard"]=125;
    Prenom ["Tartenpio"]=30;
    ui->comboBox_prenom->addItems(Prenom.keys());


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::AfficheAge(QString s)
{
    ui->lineEdit_age->setText(QString::number(Prenom[s]));
}

