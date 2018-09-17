/********************************************************************************
** Form generated from reading UI file 'dialogpreference.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPREFERENCE_H
#define UI_DIALOGPREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPreference
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_rectangle_arrondie;
    QComboBox *comboBox_rectangle;
    QSpinBox *spinBox_epaisseur;
    QComboBox *comboBox_couleur_traint;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_taille_a;
    QSpinBox *spinBox_taille_b;
    QLabel *label_5;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *DialogPreference)
    {
        if (DialogPreference->objectName().isEmpty())
            DialogPreference->setObjectName(QStringLiteral("DialogPreference"));
        DialogPreference->resize(400, 300);
        horizontalLayout_2 = new QHBoxLayout(DialogPreference);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogPreference);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(DialogPreference);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(DialogPreference);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(DialogPreference);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_rectangle_arrondie = new QComboBox(DialogPreference);
        comboBox_rectangle_arrondie->setObjectName(QStringLiteral("comboBox_rectangle_arrondie"));

        verticalLayout->addWidget(comboBox_rectangle_arrondie);

        comboBox_rectangle = new QComboBox(DialogPreference);
        comboBox_rectangle->setObjectName(QStringLiteral("comboBox_rectangle"));

        verticalLayout->addWidget(comboBox_rectangle);

        spinBox_epaisseur = new QSpinBox(DialogPreference);
        spinBox_epaisseur->setObjectName(QStringLiteral("spinBox_epaisseur"));

        verticalLayout->addWidget(spinBox_epaisseur);

        comboBox_couleur_traint = new QComboBox(DialogPreference);
        comboBox_couleur_traint->setObjectName(QStringLiteral("comboBox_couleur_traint"));

        verticalLayout->addWidget(comboBox_couleur_traint);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 5, 3, 3);
        label_4 = new QLabel(DialogPreference);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinBox_taille_a = new QSpinBox(DialogPreference);
        spinBox_taille_a->setObjectName(QStringLiteral("spinBox_taille_a"));

        gridLayout_2->addWidget(spinBox_taille_a, 0, 1, 1, 1);

        spinBox_taille_b = new QSpinBox(DialogPreference);
        spinBox_taille_b->setObjectName(QStringLiteral("spinBox_taille_b"));

        gridLayout_2->addWidget(spinBox_taille_b, 1, 1, 1, 1);

        label_5 = new QLabel(DialogPreference);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        pushButton_ok = new QPushButton(DialogPreference);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        gridLayout_2->addWidget(pushButton_ok, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(DialogPreference);

        QMetaObject::connectSlotsByName(DialogPreference);
    } // setupUi

    void retranslateUi(QDialog *DialogPreference)
    {
        DialogPreference->setWindowTitle(QApplication::translate("DialogPreference", "Dialog", nullptr));
        label->setText(QApplication::translate("DialogPreference", "Couleur Rectangle arrondie", nullptr));
        label_2->setText(QApplication::translate("DialogPreference", "Couleur Rectangle ", nullptr));
        label_3->setText(QApplication::translate("DialogPreference", "Couleur trait ", nullptr));
        label_6->setText(QApplication::translate("DialogPreference", "Epaisseur", nullptr));
        label_4->setText(QApplication::translate("DialogPreference", "Taille A Pixmap", nullptr));
        label_5->setText(QApplication::translate("DialogPreference", "Taille B Pixmap", nullptr));
        pushButton_ok->setText(QApplication::translate("DialogPreference", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPreference: public Ui_DialogPreference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPREFERENCE_H
