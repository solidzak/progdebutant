#include "dialogtest1.h"
#include "ui_dialogtest1.h"

DialogTest1::DialogTest1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTest1)
{
    ui->setupUi(this);
}

DialogTest1::~DialogTest1()
{
    delete ui;
}
