#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QColor>
#include <QColorDialog>
#include <QPen>
#include <QPainter>
#include <QBrush>
#include <QChar>
#include <QFont>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_caractere,SIGNAL(clicked()),this,SLOT (choix_couleur_1()));
    connect(ui->pushButton_rectangle,SIGNAL(clicked()),this,SLOT (choix_couleur_2()));
    connect(ui->pushButton_contour_rectangle,SIGNAL(clicked()),this,SLOT (choix_couleur_3()));
    connect(ui->pushButton_couleur2,SIGNAL(clicked()),this,SLOT (choix_couleur_3()));
    connect(ui->pushButton_ok,SIGNAL(clicked()),this,SLOT (valider()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::choix_couleur_1()
{
    Couleur_caractere=QColorDialog::getColor(Qt::black,this);
    ui->pushButton_caractere->setpen(Couleur_caractere);

}

void MainWindow::choix_couleur_2()
{
    Couleur_rectangle=QColorDialog::getColor(Qt::black,this);
}

void MainWindow::choix_couleur_3()
{
    Couleur_contour_rectangle=QColorDialog::getColor(Qt::black,this);
}

void MainWindow::valider()
{
    QChar ascii=1;

    for(int cpt=33; cpt<127;cpt++)
    {
       ascii=QChar(cpt);
       //qDebug()<<ascii;
        QFont font;
        font.setPointSize(ui->spinBox_epaisseur->value());

       QPixmap *pixmap = new QPixmap(ui->spinBox_taille_a->value(),ui->spinBox_taille_b->value());
       pixmap->fill(Qt::transparent);
       QPainter *painter= new QPainter(pixmap);
       // Définition du stylo et de la brosse
       QPen pen(Couleur_caractere);
       //pen.setWidth(ui->spinBox_epaisseur->value());
       QBrush brush(Couleur_rectangle);
      // painter->begin(pixmap);
       // C'est sur le painter qu'on applique une ligne
       painter->setPen(pen);
       painter->setBrush(brush);
       painter->setFont(font);
       painter->drawRoundRect(0,0,this->height()/15,this->width()/15);


       painter->drawText(9,15,QString(ascii));

       //painter->drawText(ui->spinBox_taille_a->value(),ui->spinBox_taille_b->value(),ui->spinBox_epaisseur,QString(ascii));
       painter->end();
       // Une fois la painter fermé on sauve le pixmap dans un fichier
       QString namefile;
       namefile.setNum(cpt);
       namefile=namefile+".png";
       pixmap->save("/tmp/"+namefile);
       free(painter);
       free(pixmap);
    }
}
