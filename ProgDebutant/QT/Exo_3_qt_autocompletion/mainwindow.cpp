#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCompleter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList liste_prenom = (QStringList() << "robert" << "roberta" << "roberito");

   //QCompleter *completer = new QCompleter(liste_prenom, this);
    completer = new QCompleter(liste_prenom, this);
   completer->setCaseSensitivity(Qt::CaseInsensitive);
   ui->lineEdit_test1->setCompleter(completer);

}

MainWindow::~MainWindow()
{

    delete ui;
    delete completer;
}


