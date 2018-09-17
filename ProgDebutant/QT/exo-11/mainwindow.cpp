#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QByteArray>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->actionquitter, SIGNAL(triggered()),
    this,SLOT(urgent_save()));

//    connect (ui->actionquitter, SIGNAL(triggered()),
//    this,SLOT(close()));

    connect (ui->actionfichier, SIGNAL(triggered()),
    this,SLOT(lecturefichier()));

    connect(ui->actionSauvegarder, SIGNAL(triggered()),
            this, SLOT(savefile()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lecturefichier()
{
    Filename = QFileDialog::getOpenFileName(this,QString("Ouvrir un fichier"), "/home/zakaria/");
    QFile file (Filename);

    file.open(QIODevice::ReadOnly | QIODevice::Text);
    ui->plainTextEdit_fichier->document()->setPlainText(file.readAll());

    file.close();

}

void MainWindow::savefile()
{

    QFile file (Filename);
    QString textinsert;
    textinsert=ui->plainTextEdit_fichier->toPlainText();
        file.open(QIODevice::WriteOnly);
        if(!file.isOpen())
        {
            QMessageBox msgBox;
            msgBox.setText("The file is not open.");
            msgBox.exec();
        }
        else
        {
            QTextStream outStream(&file);
            outStream << textinsert;
            QMessageBox msgBox;
            msgBox.setText("The document has been modified.");
            msgBox.exec();
        }
        file.close();



}

void MainWindow::urgent_save()
{

    QMessageBox msgBox(this);
    msgBox.setText(QString("On va quitter"));
    msgBox.setInformativeText(QString("Êtes-vous sûr?"));
    msgBox.setStandardButtons(QMessageBox::Save
    |QMessageBox::Discard|QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();

    if (ret == QMessageBox::Save)

    {
        QFile file (Filename);
        QString textinsert;
        textinsert=ui->plainTextEdit_fichier->toPlainText();
            file.open(QIODevice::WriteOnly);
            if(!file.isOpen())
            {
                QMessageBox msgBox;
                msgBox.setText("The file is not open.");
                msgBox.exec();
            }
            else
            {
                QTextStream outStream(&file);
                outStream << textinsert;
                QMessageBox msgBox;
                msgBox.setText("The document has been modified.");
                msgBox.exec();
            }
            file.close();
            close();
    }





}
