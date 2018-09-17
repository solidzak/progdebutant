#ifndef ZAKPUSHBUTTON_H
#define ZAKPUSHBUTTON_H
#include <QPushButton>
#include <QWidget>
#include <QDebug>


class ZakPushButton : public QPushButton
{
    Q_OBJECT

public:
    ZakPushButton(QWidget *parent);


protected:
    void mouseDoubleClickEvent(QMouseEvent *event);

signals:

    void Doubleclicked();
};

#endif // ZAKPUSHBUTTON_H
