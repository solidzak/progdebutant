#include "couleur2_qpushbutton.h"
#include <QPen>


Couleur2_QPushButton::Couleur2_QPushButton(QWidget *parent):QPushButton (parent)
{
        pencolor=Qt::black;
}

void Couleur2_QPushButton::setpen(QColor c)
{
    pencolor=c;
}

 QColor Couleur2_QPushButton::getpen()
{
    return pencolor;
}

void Couleur2_QPushButton::paintEvent(QPaintEvent *event)
{
    QPushButton::paintEvent(event);
    QPainter painter(this);
    painter.setPen(pencolor);

    painter.drawEllipse(0,0,10,10);
    //painter.setPen()



}



