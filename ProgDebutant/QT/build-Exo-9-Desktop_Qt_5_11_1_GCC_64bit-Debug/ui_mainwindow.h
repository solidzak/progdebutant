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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_prenom;
    QLabel *label_nom;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_nom;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_set;
    QPushButton *pushButton_maj;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_prenom = new QLabel(centralWidget);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));

        gridLayout->addWidget(label_prenom, 0, 0, 1, 1);

        label_nom = new QLabel(centralWidget);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        gridLayout->addWidget(label_nom, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit_prenom = new QLineEdit(centralWidget);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));

        gridLayout_2->addWidget(lineEdit_prenom, 0, 0, 1, 1);

        lineEdit_nom = new QLineEdit(centralWidget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        gridLayout_2->addWidget(lineEdit_nom, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        gridLayout_3->addWidget(pushButton_exit, 0, 3, 1, 1);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        gridLayout_3->addWidget(pushButton_clear, 0, 0, 1, 1);

        pushButton_set = new QPushButton(centralWidget);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));

        gridLayout_3->addWidget(pushButton_set, 0, 1, 1, 1);

        pushButton_maj = new QPushButton(centralWidget);
        pushButton_maj->setObjectName(QStringLiteral("pushButton_maj"));

        gridLayout_3->addWidget(pushButton_maj, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_prenom->setText(QApplication::translate("MainWindow", "Prenom", nullptr));
        label_nom->setText(QApplication::translate("MainWindow", "Prenom", nullptr));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_set->setText(QApplication::translate("MainWindow", "Set", nullptr));
        pushButton_maj->setText(QApplication::translate("MainWindow", "Maj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
