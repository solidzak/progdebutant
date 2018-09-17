#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSpinBox>


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

    void Qdate_today();

};

#endif // MAINWINDOW_H
