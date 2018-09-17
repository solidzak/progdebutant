#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>

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
     QColor Couleur_caractere;
     QColor Couleur_rectangle;
     QColor Couleur_contour_rectangle;

private slots:
    void choix_couleur_1();
    void choix_couleur_2();
    void choix_couleur_3();
    void valider();
    //void couleur2();





};

#endif // MAINWINDOW_H1
