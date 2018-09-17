#include "zakpushbutton.h"

ZakPushButton::ZakPushButton(QWidget *parent):QPushButton (parent)
{
    //qDebug()<<"bipbipbpibpibpib";

}

void ZakPushButton::mouseDoubleClickEvent(QMouseEvent *event)
{
    //qDebug()<<"bipbipbpibpibpib";
    emit Doubleclicked();
}
