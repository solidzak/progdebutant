#ifndef DIALOGFONT_H
#define DIALOGFONT_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class DialogFont;
}

class DialogFont : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFont(QWidget *parent = nullptr);
    ~DialogFont();
    QSettings s;

private:
    Ui::DialogFont *ui;

private slots:
    void savefont();

signals :
    void sendfont();

};

#endif // DIALOGFONT_H
