#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myitem.h"
#include "QDebug"
#include <QGraphicsItem>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QRect rect;
//    rect.setRect(-100,0,40,50);
//    QColor col(Qt::red);
//    QPen pen;
//    pen.setColor(col);
//    QBrush brush(Qt::SolidPattern);
//    brush.setColor(col);
//    QPixmap pixmap("Toutankhamon.jpg");



    QGraphicsScene *scene=new QGraphicsScene();

   // scene->addRect(rect,pen,brush);
   // scene->addPixmap(pixmap);
   // scene->addText("Hello, world!");
   // scene->addEllipse(100,0,100,100);
    QPixmap pixmap("image-editing-101040_960_720.jpg");
    //scene->addPixmap(pixmap);
    ui->graphicsView->setScene(scene);


//   m_graphicsscene=new QGraphicsScene(this);
//   ui->graphicsView->setScene(m_graphicsscene);
//   m_graphicsscene->addText(QString("Exemple"));
     Myitem *cercle1=new Myitem(1);
     scene->addItem(cercle1);
     Myitem *cercle2=new Myitem(2);
     scene->addItem(cercle2);
     Myitem *cercle3=new Myitem(3);
     scene->addItem(cercle3);


     qDebug()<<scene->items();
     //foreach (auto item,scene->items())
     for (auto item:scene->items())
     {

         qDebug()<<item->type();
     }


}

MainWindow::~MainWindow()
{
    delete ui;
}
