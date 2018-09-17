#ifndef COULEUR2_QPUSHBUTTON_H
#define COULEUR2_QPUSHBUTTON_H
#include <QPushButton>
#include <QWidget>
#include <QDebug>
#include <QPainter>


class Couleur2_QPushButton : public QPushButton
{
    Q_OBJECT

public:
    Couleur2_QPushButton(QWidget *parent);


    QColor pencolor;
    void setpen(QColor c);
    QColor getpen();
private:
    void paintEvent(QPaintEvent *event);

};

#endif // COULEUR2_QPUSHBUTTON_H
