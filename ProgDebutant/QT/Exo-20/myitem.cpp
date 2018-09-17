#include "myitem.h"
#include <QPen>

Myitem::Myitem()
{
    setFlag(QGraphicsItem::ItemIsMovable);

}

Myitem::Myitem(int num): m_num(num)
{
    setFlag(QGraphicsItem::ItemIsMovable);

}



QRectF Myitem::boundingRect() const
{
    return QRectF(0,0,100,100);
}
void Myitem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QString numero;
    numero.setNum(m_num);

    QRectF rect = boundingRect();
    painter->setPen(QPen(Qt::red));
    painter->drawEllipse(rect);
    painter->setBrush(Qt::GlobalColor::blue);
    painter->drawEllipse(rect);
    painter->drawText(rect,Qt::AlignCenter,numero);








}
