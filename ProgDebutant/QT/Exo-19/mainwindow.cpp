#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QChar ascii=1;

    for(int cpt=33; cpt<127;cpt++)
    {
       ascii=cpt;
       qDebug()<<ascii;
       DialogPreference *fenetre=new DialogPreference(this);
       fenetre->exec();
       QPixmap *pixmap = new QPixmap(30,30);
       pixmap->fill(Qt::transparent);
       QPainter *painter= new QPainter(pixmap);
       // Définition du stylo et de la brosse
       QPen pen(QColor(Qt::black);
       QBrush brush(QColor(Qt::red);
       // C'est sur le painter qu'on applique une ligne
       painter->setPen(pen);
       painter->setBrush(brush);
       painter->drawLine(10,10,150,150);
       painter->end();
       // Une fois la painter fermé on sauve le pixmap dans un fichier
       pixmap->save("fichier.png");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event)
{


}

