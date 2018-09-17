#ifndef DIALOGTEST1_H
#define DIALOGTEST1_H

#include <QDialog>

namespace Ui {
class DialogTest1;
}

class DialogTest1 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTest1(QWidget *parent = nullptr);
    ~DialogTest1();

private:
    Ui::DialogTest1 *ui;
};

#endif // DIALOGTEST1_H
