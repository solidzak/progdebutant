#ifndef MYITEM_H
#define MYITEM_H
#include <QGraphicsItem>
#include <QPainter>

class Myitem : public QGraphicsItem
{
   // Q_OBJECT
public:

    Myitem();
    Myitem(int num);
    int m_num;
    enum { Type = UserType + 1 };

    int type() const
    {
        // Enable the use of qgraphicsitem_cast with this item.
        return Type;
    }


private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);



};

#endif // MYITEM_H
