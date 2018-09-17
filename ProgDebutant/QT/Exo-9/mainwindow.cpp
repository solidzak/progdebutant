#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->pushButton_clear, SIGNAL(clicked()),
    this,SLOT(Clear_editline()));

    connect (ui->pushButton_set, SIGNAL(clicked()),
    this,SLOT(Set_editline()));

    connect (ui->pushButton_exit, SIGNAL(clicked()),
    this,SLOT(close()));

    connect (ui->pushButton_maj, SIGNAL(clicked()),
    this,SLOT(Majuscule()));


 }

 void MainWindow::Clear_editline()
 {
    ui->lineEdit_nom->clear();
    ui->lineEdit_prenom->clear();
 }

 void MainWindow::Set_editline()
 {
     ui->lineEdit_nom->setText("Aljami");
     ui->lineEdit_prenom->setText("Zakaria");
 }

 void MainWindow::Majuscule()
 {
    ui->lineEdit_nom->setText(ui->lineEdit_nom->text().toUpper());
    ui->lineEdit_prenom->setText(ui->lineEdit_prenom->text().toUpper());
 }

MainWindow::~MainWindow()
{
    delete ui;
}
