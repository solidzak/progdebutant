#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect (ui->pushButton_Clear,SIGNAL(clicked()),
    this,SLOT(Clear_line_edit()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Clear_line_edit()
{
    ui->lineEdit_nom->clear();
    ui->lineEdit_prenom->clear();
}
