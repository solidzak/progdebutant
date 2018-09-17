#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<dialogapropos.h>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:

    void open_dialogue_apropos();

};

#endif // MAINWINDOW_H
