#include "dialogapropos.h"
#include "ui_dialogapropos.h"

DialogApropos::DialogApropos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogApropos)
{
    ui->setupUi(this);
}

DialogApropos::~DialogApropos()
{
    delete ui;
}
