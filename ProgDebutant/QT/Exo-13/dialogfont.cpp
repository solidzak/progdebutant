#include "dialogfont.h"
#include "ui_dialogfont.h"
#include <QSettings>

DialogFont::DialogFont(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFont)
{
    ui->setupUi(this);

    connect (ui->fontComboBox_familly, SIGNAL(currentFontChanged(const QFont)),
    this,SLOT(savefont()));

    connect (ui->spinBox_font_size, SIGNAL(valueChanged(int)),
    this,SLOT(savefont()));

    connect (ui->pushButton_save, SIGNAL(clicked()),
    this,SLOT(savefont()));


    connect (ui->pushButton_close, SIGNAL(clicked()),
    this,SLOT(close()));

    ui->label_test_font->setFont(s.value("policy").value<QFont>());

}

DialogFont::~DialogFont()
{
    delete ui;
}

void DialogFont::savefont()
{

    QFont fontf = ui->fontComboBox_familly->currentFont();

    fontf.setPointSize(ui->spinBox_font_size->value());

    ui->label_test_font->setFont(fontf);
    //s.setValue("policy",ui->fontComboBox_familly->currentFont());
    s.setValue("policy",fontf);
    emit sendfont();


}
