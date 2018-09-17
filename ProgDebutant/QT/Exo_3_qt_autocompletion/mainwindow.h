#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <qcompleter.h>

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
    QCompleter *completer;

private slots:





};

#endif // MAINWINDOW_H
