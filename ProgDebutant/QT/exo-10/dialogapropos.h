#ifndef DIALOGAPROPOS_H
#define DIALOGAPROPOS_H

#include <QDialog>

namespace Ui {
class DialogApropos;
}

class DialogApropos : public QDialog
{
    Q_OBJECT

public:
    explicit DialogApropos(QWidget *parent = nullptr);
    ~DialogApropos();

private:
    Ui::DialogApropos *ui;


};

#endif // DIALOGAPROPOS_H
