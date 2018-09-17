#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<dialogapropos.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->actionQuiter, SIGNAL(triggered()),
    this,SLOT(close()));

    connect (ui->actionA_propos, SIGNAL(triggered()),
    this,SLOT(open_dialogue_apropos()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open_dialogue_apropos()
{


DialogApropos *fenetreabout= new DialogApropos(0);
fenetreabout->show();

}
