/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionquitter;
    QAction *actionfichier;
    QAction *actiondernier_fichier_ouvert;
    QAction *actionSauvegarder;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit_fichier;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuouvrir;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionquitter = new QAction(MainWindow);
        actionquitter->setObjectName(QStringLiteral("actionquitter"));
        actionfichier = new QAction(MainWindow);
        actionfichier->setObjectName(QStringLiteral("actionfichier"));
        actiondernier_fichier_ouvert = new QAction(MainWindow);
        actiondernier_fichier_ouvert->setObjectName(QStringLiteral("actiondernier_fichier_ouvert"));
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QStringLiteral("actionSauvegarder"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit_fichier = new QPlainTextEdit(centralWidget);
        plainTextEdit_fichier->setObjectName(QStringLiteral("plainTextEdit_fichier"));
        plainTextEdit_fichier->setGeometry(QRect(20, 20, 331, 151));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuouvrir = new QMenu(menuFichier);
        menuouvrir->setObjectName(QStringLiteral("menuouvrir"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(menuouvrir->menuAction());
        menuFichier->addAction(actionSauvegarder);
        menuFichier->addAction(actionquitter);
        menuouvrir->addAction(actionfichier);
        menuouvrir->addAction(actiondernier_fichier_ouvert);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionquitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        actionfichier->setText(QApplication::translate("MainWindow", "fichier", nullptr));
        actiondernier_fichier_ouvert->setText(QApplication::translate("MainWindow", "dernier fichier ouvert", nullptr));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", nullptr));
        menuouvrir->setTitle(QApplication::translate("MainWindow", "ouvrir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
