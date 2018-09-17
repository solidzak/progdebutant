/********************************************************************************
** Form generated from reading UI file 'dialogtest1.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEST1_H
#define UI_DIALOGTEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogTest1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *DialogTest1)
    {
        if (DialogTest1->objectName().isEmpty())
            DialogTest1->setObjectName(QStringLiteral("DialogTest1"));
        DialogTest1->resize(400, 300);
        pushButton = new QPushButton(DialogTest1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 50, 83, 28));
        pushButton_2 = new QPushButton(DialogTest1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 90, 83, 28));
        pushButton_3 = new QPushButton(DialogTest1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 130, 83, 28));

        retranslateUi(DialogTest1);

        QMetaObject::connectSlotsByName(DialogTest1);
    } // setupUi

    void retranslateUi(QDialog *DialogTest1)
    {
        DialogTest1->setWindowTitle(QApplication::translate("DialogTest1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DialogTest1", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("DialogTest1", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("DialogTest1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTest1: public Ui_DialogTest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEST1_H
