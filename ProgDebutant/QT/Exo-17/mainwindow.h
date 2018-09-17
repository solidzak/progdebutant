#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QModelIndex>
#include <QSqlTableModel>

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
    QSqlTableModel *model;

private slots:
    void AfficheInfo(QModelIndex s);
    void affichage_ville(QString text);
};

#endif // MAINWINDOW_H
