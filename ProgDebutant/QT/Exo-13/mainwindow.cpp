#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <dialogfont.h>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->actionPreference, SIGNAL(triggered()),
    this,SLOT(selectFont()));

    //connect(this,SIGNAL(sendfont()),this,SLOT (changeFont()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectFont()
{
    DialogFont *fenetrefont=new DialogFont(this);
    connect(fenetrefont,SIGNAL(sendfont()),this,SLOT( ()));
    fenetrefont->exec();

}

void MainWindow::changFont()
{
   QSettings s;
   ui->label_test_police->setFont(s.value("policy").value<QFont>());
   //ui->label_test_font->setFont(s.value("policy").value<QFont>());
}
