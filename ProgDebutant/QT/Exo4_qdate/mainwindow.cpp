#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBox_int->setRange(-100,100);

    connect (ui->spinBox_int, SIGNAL(valueChanged(int)),
    this,SLOT(Qdate_today()));

   connect (ui->pushButton_exit, SIGNAL(clicked()),
   this,SLOT(close()));


}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::Qdate_today()
{
  QDateEdit d;

 d.setDate(ui->dateEdit_today->date());
 d.setDate(d.date().addDays(ui->spinBox_int->value()));

  ui->label_today->setText(d.date().toString());



}

