/********************************************************************************
** Form generated from reading UI file 'dodaj_wybor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_WYBOR_H
#define UI_DODAJ_WYBOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_wybor
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dodaj_wybor)
    {
        if (Dodaj_wybor->objectName().isEmpty())
            Dodaj_wybor->setObjectName(QString::fromUtf8("Dodaj_wybor"));
        Dodaj_wybor->resize(598, 359);
        gridLayout_2 = new QGridLayout(Dodaj_wybor);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(Dodaj_wybor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton = new QPushButton(Dodaj_wybor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(Dodaj_wybor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(Dodaj_wybor);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Dodaj_wybor);

        QMetaObject::connectSlotsByName(Dodaj_wybor);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_wybor)
    {
        Dodaj_wybor->setWindowTitle(QApplication::translate("Dodaj_wybor", "Jaki obiekt doda\304\207", nullptr));
        pushButton_3->setText(QApplication::translate("Dodaj_wybor", "System Zraszaczy", nullptr));
        pushButton->setText(QApplication::translate("Dodaj_wybor", "System Alarmowy", nullptr));
        pushButton_2->setText(QApplication::translate("Dodaj_wybor", "System Przeciwpo\305\274arowy", nullptr));
        pushButton_4->setText(QApplication::translate("Dodaj_wybor", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dodaj_wybor: public Ui_Dodaj_wybor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_WYBOR_H
