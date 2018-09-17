#ifndef DIALOGPREFERENCE_H
#define DIALOGPREFERENCE_H

#include <QDialog>

namespace Ui {
class DialogPreference;
}

class DialogPreference : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPreference(QWidget *parent = nullptr);
    ~DialogPreference();

private:
    Ui::DialogPreference *ui;

private slots:
    void save();
};

#endif // DIALOGPREFERENCE_H
