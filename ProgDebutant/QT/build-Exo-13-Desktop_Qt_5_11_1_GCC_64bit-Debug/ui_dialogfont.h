/********************************************************************************
** Form generated from reading UI file 'dialogfont.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFONT_H
#define UI_DIALOGFONT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogFont
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_familly;
    QLabel *label_size;
    QVBoxLayout *verticalLayout_2;
    QFontComboBox *fontComboBox_familly;
    QSpinBox *spinBox_font_size;
    QLabel *label_test_font;
    QGridLayout *gridLayout;
    QPushButton *pushButton_close;
    QPushButton *pushButton_save;

    void setupUi(QDialog *DialogFont)
    {
        if (DialogFont->objectName().isEmpty())
            DialogFont->setObjectName(QStringLiteral("DialogFont"));
        DialogFont->resize(585, 414);
        verticalLayout_5 = new QVBoxLayout(DialogFont);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_familly = new QLabel(DialogFont);
        label_familly->setObjectName(QStringLiteral("label_familly"));

        verticalLayout->addWidget(label_familly);

        label_size = new QLabel(DialogFont);
        label_size->setObjectName(QStringLiteral("label_size"));

        verticalLayout->addWidget(label_size);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        fontComboBox_familly = new QFontComboBox(DialogFont);
        fontComboBox_familly->setObjectName(QStringLiteral("fontComboBox_familly"));

        verticalLayout_2->addWidget(fontComboBox_familly);

        spinBox_font_size = new QSpinBox(DialogFont);
        spinBox_font_size->setObjectName(QStringLiteral("spinBox_font_size"));
        spinBox_font_size->setValue(11);

        verticalLayout_2->addWidget(spinBox_font_size);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        label_test_font = new QLabel(DialogFont);
        label_test_font->setObjectName(QStringLiteral("label_test_font"));

        verticalLayout_3->addWidget(label_test_font);


        verticalLayout_4->addLayout(verticalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_close = new QPushButton(DialogFont);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        gridLayout->addWidget(pushButton_close, 0, 0, 1, 1);

        pushButton_save = new QPushButton(DialogFont);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        gridLayout->addWidget(pushButton_save, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(DialogFont);

        QMetaObject::connectSlotsByName(DialogFont);
    } // setupUi

    void retranslateUi(QDialog *DialogFont)
    {
        DialogFont->setWindowTitle(QApplication::translate("DialogFont", "Dialog", nullptr));
        label_familly->setText(QApplication::translate("DialogFont", "Font Familly", nullptr));
        label_size->setText(QApplication::translate("DialogFont", "Size", nullptr));
        label_test_font->setText(QApplication::translate("DialogFont", "AbcdefGhiJKlmnoPqRstUvWxYz", nullptr));
        pushButton_close->setText(QApplication::translate("DialogFont", "Cancel", nullptr));
        pushButton_save->setText(QApplication::translate("DialogFont", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFont: public Ui_DialogFont {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFONT_H
