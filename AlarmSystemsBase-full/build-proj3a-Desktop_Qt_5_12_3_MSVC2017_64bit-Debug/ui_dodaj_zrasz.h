/********************************************************************************
** Form generated from reading UI file 'dodaj_zrasz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_ZRASZ_H
#define UI_DODAJ_ZRASZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_zrasz
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *n_nazwa_systemu_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSlider *n_stan_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QSlider *n_liczba_zgloszen_2;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *n_klasa_systemu_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *n_liczba_czujek;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *n_wrazliwosc_czujek;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *n_liczba_zraszaczy;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Dodaj_zrasz)
    {
        if (Dodaj_zrasz->objectName().isEmpty())
            Dodaj_zrasz->setObjectName(QString::fromUtf8("Dodaj_zrasz"));
        Dodaj_zrasz->resize(523, 577);
        gridLayout = new QGridLayout(Dodaj_zrasz);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Dodaj_zrasz);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        n_nazwa_systemu_2 = new QLineEdit(Dodaj_zrasz);
        n_nazwa_systemu_2->setObjectName(QString::fromUtf8("n_nazwa_systemu_2"));

        horizontalLayout_4->addWidget(n_nazwa_systemu_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(Dodaj_zrasz);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        n_stan_2 = new QSlider(Dodaj_zrasz);
        n_stan_2->setObjectName(QString::fromUtf8("n_stan_2"));
        n_stan_2->setMaximum(1);
        n_stan_2->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(n_stan_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(Dodaj_zrasz);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        n_liczba_zgloszen_2 = new QSlider(Dodaj_zrasz);
        n_liczba_zgloszen_2->setObjectName(QString::fromUtf8("n_liczba_zgloszen_2"));
        n_liczba_zgloszen_2->setMaximum(25);
        n_liczba_zgloszen_2->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(n_liczba_zgloszen_2);

        label_13 = new QLabel(Dodaj_zrasz);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(Dodaj_zrasz);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        n_klasa_systemu_2 = new QSlider(Dodaj_zrasz);
        n_klasa_systemu_2->setObjectName(QString::fromUtf8("n_klasa_systemu_2"));
        n_klasa_systemu_2->setMaximum(10);
        n_klasa_systemu_2->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(n_klasa_systemu_2);

        label_11 = new QLabel(Dodaj_zrasz);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(Dodaj_zrasz);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        n_liczba_czujek = new QSpinBox(Dodaj_zrasz);
        n_liczba_czujek->setObjectName(QString::fromUtf8("n_liczba_czujek"));

        horizontalLayout->addWidget(n_liczba_czujek);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(Dodaj_zrasz);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        n_wrazliwosc_czujek = new QDoubleSpinBox(Dodaj_zrasz);
        n_wrazliwosc_czujek->setObjectName(QString::fromUtf8("n_wrazliwosc_czujek"));

        horizontalLayout_8->addWidget(n_wrazliwosc_czujek);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(Dodaj_zrasz);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        n_liczba_zraszaczy = new QSpinBox(Dodaj_zrasz);
        n_liczba_zraszaczy->setObjectName(QString::fromUtf8("n_liczba_zraszaczy"));

        horizontalLayout_2->addWidget(n_liczba_zraszaczy);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushButton = new QPushButton(Dodaj_zrasz);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_9->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_9, 7, 0, 1, 1);


        retranslateUi(Dodaj_zrasz);
        QObject::connect(n_liczba_zgloszen_2, SIGNAL(valueChanged(int)), label_13, SLOT(setNum(int)));
        QObject::connect(n_klasa_systemu_2, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Dodaj_zrasz);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_zrasz)
    {
        Dodaj_zrasz->setWindowTitle(QApplication::translate("Dodaj_zrasz", "Dialog", nullptr));
        label->setText(QApplication::translate("Dodaj_zrasz", "Nazwa", nullptr));
        n_nazwa_systemu_2->setText(QApplication::translate("Dodaj_zrasz", "Nowy System Zraszaczy", nullptr));
        label_6->setText(QApplication::translate("Dodaj_zrasz", "Stan: WY\305\201/W\305\201", nullptr));
        label_12->setText(QApplication::translate("Dodaj_zrasz", "Liczba zg\305\202osze\305\204", nullptr));
        label_13->setText(QApplication::translate("Dodaj_zrasz", "   0", nullptr));
        label_5->setText(QApplication::translate("Dodaj_zrasz", "Klasa systemu", nullptr));
        label_11->setText(QApplication::translate("Dodaj_zrasz", "   0", nullptr));
        label_7->setText(QApplication::translate("Dodaj_zrasz", "Liczba czujek", nullptr));
        label_14->setText(QApplication::translate("Dodaj_zrasz", "Wra\305\274liwo\305\233\304\207 czujek", nullptr));
        label_8->setText(QApplication::translate("Dodaj_zrasz", "Liczba zraszaczy", nullptr));
        pushButton->setText(QApplication::translate("Dodaj_zrasz", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dodaj_zrasz: public Ui_Dodaj_zrasz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_ZRASZ_H
