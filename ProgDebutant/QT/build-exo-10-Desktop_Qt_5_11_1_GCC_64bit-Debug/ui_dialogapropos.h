/********************************************************************************
** Form generated from reading UI file 'dialogapropos.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAPROPOS_H
#define UI_DIALOGAPROPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogApropos
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_numVersion;
    QLabel *label_nomProgramme;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogApropos)
    {
        if (DialogApropos->objectName().isEmpty())
            DialogApropos->setObjectName(QStringLiteral("DialogApropos"));
        DialogApropos->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(DialogApropos);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_numVersion = new QLabel(DialogApropos);
        label_numVersion->setObjectName(QStringLiteral("label_numVersion"));

        verticalLayout->addWidget(label_numVersion);

        label_nomProgramme = new QLabel(DialogApropos);
        label_nomProgramme->setObjectName(QStringLiteral("label_nomProgramme"));

        verticalLayout->addWidget(label_nomProgramme);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogApropos);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(DialogApropos);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogApropos, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogApropos, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogApropos);
    } // setupUi

    void retranslateUi(QDialog *DialogApropos)
    {
        DialogApropos->setWindowTitle(QApplication::translate("DialogApropos", "Dialog", nullptr));
        label_numVersion->setText(QApplication::translate("DialogApropos", "Version 1.00", nullptr));
        label_nomProgramme->setText(QApplication::translate("DialogApropos", "Programme de test des fenetre de dialogue du nom de progTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogApropos: public Ui_DialogApropos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAPROPOS_H
