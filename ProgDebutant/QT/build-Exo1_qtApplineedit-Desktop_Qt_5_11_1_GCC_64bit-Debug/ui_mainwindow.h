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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_nom;
    QLabel *label_prenom;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(498, 377);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 12, 187, 66));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_nom = new QLabel(widget);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        verticalLayout_2->addWidget(label_nom);

        label_prenom = new QLabel(widget);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));

        verticalLayout_2->addWidget(label_prenom);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_nom = new QLineEdit(widget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        verticalLayout->addWidget(lineEdit_nom);

        lineEdit_prenom = new QLineEdit(widget);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));

        verticalLayout->addWidget(lineEdit_prenom);


        horizontalLayout->addLayout(verticalLayout);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 100, 171, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Ok = new QPushButton(widget1);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));

        horizontalLayout_2->addWidget(pushButton_Ok);

        pushButton_Clear = new QPushButton(widget1);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));

        horizontalLayout_2->addWidget(pushButton_Clear);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 498, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_nom->setBuddy(lineEdit_nom);
        label_prenom->setBuddy(lineEdit_prenom);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_nom, lineEdit_prenom);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_nom->setText(QApplication::translate("MainWindow", "&nom", nullptr));
        label_prenom->setText(QApplication::translate("MainWindow", "&prenom", nullptr));
        lineEdit_nom->setText(QString());
        lineEdit_prenom->setText(QString());
        pushButton_Ok->setText(QApplication::translate("MainWindow", "ok", nullptr));
        pushButton_Clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
