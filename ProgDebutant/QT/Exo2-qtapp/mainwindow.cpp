#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->lineEdit_test1,SIGNAL(returnPressed()),this,SLOT(Finish_line_edit()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Finish_line_edit()
{

        //cout<<ui->lineEdit_test1<<endl;

   qDebug()<<"voici la ligne saisie"<<ui->lineEdit_test1->text();

   QString text_line_edit_test= ui->lineEdit_test1->text().toUpper();
   text_line_edit_test = text_line_edit_test.toUpper();
   ui->lineEdit_test1->clear();
   ui->lineEdit_test1->insert(text_line_edit_test);
}
