/********************************************************************************
** Form generated from reading UI file 'dodaj_ppoz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_PPOZ_H
#define UI_DODAJ_PPOZ_H

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

class Ui_dodaj_ppoz
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
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
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *dodaj_ppoz)
    {
        if (dodaj_ppoz->objectName().isEmpty())
            dodaj_ppoz->setObjectName(QString::fromUtf8("dodaj_ppoz"));
        dodaj_ppoz->resize(588, 458);
        gridLayout = new QGridLayout(dodaj_ppoz);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(dodaj_ppoz);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        n_nazwa_systemu_2 = new QLineEdit(dodaj_ppoz);
        n_nazwa_systemu_2->setObjectName(QString::fromUtf8("n_nazwa_systemu_2"));

        horizontalLayout_5->addWidget(n_nazwa_systemu_2);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(dodaj_ppoz);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        n_stan_2 = new QSlider(dodaj_ppoz);
        n_stan_2->setObjectName(QString::fromUtf8("n_stan_2"));
        n_stan_2->setMaximum(1);
        n_stan_2->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(n_stan_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(dodaj_ppoz);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        n_liczba_zgloszen_2 = new QSlider(dodaj_ppoz);
        n_liczba_zgloszen_2->setObjectName(QString::fromUtf8("n_liczba_zgloszen_2"));
        n_liczba_zgloszen_2->setMaximum(25);
        n_liczba_zgloszen_2->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(n_liczba_zgloszen_2);

        label_13 = new QLabel(dodaj_ppoz);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(dodaj_ppoz);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        n_klasa_systemu_2 = new QSlider(dodaj_ppoz);
        n_klasa_systemu_2->setObjectName(QString::fromUtf8("n_klasa_systemu_2"));
        n_klasa_systemu_2->setMaximum(10);
        n_klasa_systemu_2->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(n_klasa_systemu_2);

        label_11 = new QLabel(dodaj_ppoz);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(dodaj_ppoz);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        n_liczba_czujek = new QSpinBox(dodaj_ppoz);
        n_liczba_czujek->setObjectName(QString::fromUtf8("n_liczba_czujek"));

        horizontalLayout->addWidget(n_liczba_czujek);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_14 = new QLabel(dodaj_ppoz);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_8->addWidget(label_14);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        n_wrazliwosc_czujek = new QDoubleSpinBox(dodaj_ppoz);
        n_wrazliwosc_czujek->setObjectName(QString::fromUtf8("n_wrazliwosc_czujek"));

        horizontalLayout_8->addWidget(n_wrazliwosc_czujek);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushButton = new QPushButton(dodaj_ppoz);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_9->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_9, 6, 0, 1, 1);


        retranslateUi(dodaj_ppoz);
        QObject::connect(n_liczba_zgloszen_2, SIGNAL(valueChanged(int)), label_13, SLOT(setNum(int)));
        QObject::connect(n_klasa_systemu_2, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(dodaj_ppoz);
    } // setupUi

    void retranslateUi(QDialog *dodaj_ppoz)
    {
        dodaj_ppoz->setWindowTitle(QApplication::translate("dodaj_ppoz", "Dialog", nullptr));
        label_4->setText(QApplication::translate("dodaj_ppoz", "Nazwa", nullptr));
        n_nazwa_systemu_2->setText(QApplication::translate("dodaj_ppoz", "Nowy System Przeciwpo\305\274arowy", nullptr));
        label_6->setText(QApplication::translate("dodaj_ppoz", "Stan: WY\305\201/W\305\201", nullptr));
        label_12->setText(QApplication::translate("dodaj_ppoz", "Liczba zg\305\202osze\305\204", nullptr));
        label_13->setText(QApplication::translate("dodaj_ppoz", "   0", nullptr));
        label_5->setText(QApplication::translate("dodaj_ppoz", "Klasa systemu", nullptr));
        label_11->setText(QApplication::translate("dodaj_ppoz", "   0", nullptr));
        label_7->setText(QApplication::translate("dodaj_ppoz", "Liczba czujek", nullptr));
        label_14->setText(QApplication::translate("dodaj_ppoz", "Wra\305\274liwo\305\233\304\207 czujek", nullptr));
        pushButton->setText(QApplication::translate("dodaj_ppoz", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dodaj_ppoz: public Ui_dodaj_ppoz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_PPOZ_H
