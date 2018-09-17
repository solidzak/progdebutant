#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>

using namespace std;

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
    void Finish_line_edit();

};

#endif // MAINWINDOW_H
