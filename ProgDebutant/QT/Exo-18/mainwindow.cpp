#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <zakpushbutton.h>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   //connect(ui->pushButton,SIGNAL(doublclicked(),this,SLOT(doublec()));
           connect (ui->pushButton, SIGNAL(Doubleclicked()),
           this,SLOT(doublec()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawLine(0,0,this->width(),this->height());
    painter.drawLine(this->width(),0,0,this->height());

    //ClasseMere::paintEvent(e) ;
    //qDebug()<<this->width()<<this->height();

}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    //qDebug()<<"ah ah ah ah j'ai double clicker";
}

void MainWindow::doublec()
{
    qDebug()<<"il a double clickééééééééééééééééé";
}

