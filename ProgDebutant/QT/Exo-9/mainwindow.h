#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QLineEdit>
#include<QPushButton>

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

private slots :
    void Clear_editline();
    void Set_editline();
    void Majuscule();
};

#endif // MAINWINDOW_H
