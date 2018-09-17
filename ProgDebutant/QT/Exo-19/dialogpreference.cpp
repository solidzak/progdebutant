#include "dialogpreference.h"
#include "ui_dialogpreference.h"

DialogPreference::DialogPreference(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPreference)
{
    ui->setupUi(this);
    connect(ui->pushButton_ok,SIGNAL(clicked()),this,SLOT(save()));

}

DialogPreference::~DialogPreference()
{
    delete ui;
}

void DialogPreference::save()
{

}
