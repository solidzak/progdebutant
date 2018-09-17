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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuiter;
    QAction *actionDernier_Fichier_Ouvert;
    QAction *actionA_propos;
    QAction *actionfichier;
    QAction *actiondernier_fichier_ouvert;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menufichier;
    QMenu *menuOuvrir;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(623, 455);
        actionQuiter = new QAction(MainWindow);
        actionQuiter->setObjectName(QStringLiteral("actionQuiter"));
        actionDernier_Fichier_Ouvert = new QAction(MainWindow);
        actionDernier_Fichier_Ouvert->setObjectName(QStringLiteral("actionDernier_Fichier_Ouvert"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QStringLiteral("actionA_propos"));
        actionfichier = new QAction(MainWindow);
        actionfichier->setObjectName(QStringLiteral("actionfichier"));
        actiondernier_fichier_ouvert = new QAction(MainWindow);
        actiondernier_fichier_ouvert->setObjectName(QStringLiteral("actiondernier_fichier_ouvert"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 25));
        menufichier = new QMenu(menuBar);
        menufichier->setObjectName(QStringLiteral("menufichier"));
        menuOuvrir = new QMenu(menufichier);
        menuOuvrir->setObjectName(QStringLiteral("menuOuvrir"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menufichier->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menufichier->addAction(menuOuvrir->menuAction());
        menufichier->addAction(actionQuiter);
        menufichier->addSeparator();
        menuOuvrir->addAction(actionfichier);
        menuOuvrir->addAction(actiondernier_fichier_ouvert);
        menuAide->addAction(actionA_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuiter->setText(QApplication::translate("MainWindow", "Quiter", nullptr));
        actionDernier_Fichier_Ouvert->setText(QApplication::translate("MainWindow", "Dernier Fichier Ouvert", nullptr));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", nullptr));
        actionfichier->setText(QApplication::translate("MainWindow", "fichier", nullptr));
        actiondernier_fichier_ouvert->setText(QApplication::translate("MainWindow", "dernier fichier ouvert", nullptr));
        menufichier->setTitle(QApplication::translate("MainWindow", "fichier", nullptr));
        menuOuvrir->setTitle(QApplication::translate("MainWindow", "Ouvrir", nullptr));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
