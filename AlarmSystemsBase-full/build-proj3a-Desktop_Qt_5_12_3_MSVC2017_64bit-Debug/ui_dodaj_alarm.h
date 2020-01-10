/********************************************************************************
** Form generated from reading UI file 'dodaj_alarm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DODAJ_ALARM_H
#define UI_DODAJ_ALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dodaj_alarm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *n_nazwa_modelu;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *n_klasa_systemu;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *n_pobor_mocy;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSlider *n_liczba_zgloszen;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QCheckBox *n_przycisk_napadowy;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *n_nazwa_systemu;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSlider *n_stan;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QCheckBox *n_zasilacz_awaryjny;

    void setupUi(QDialog *Dodaj_alarm)
    {
        if (Dodaj_alarm->objectName().isEmpty())
            Dodaj_alarm->setObjectName(QString::fromUtf8("Dodaj_alarm"));
        Dodaj_alarm->resize(595, 472);
        gridLayout = new QGridLayout(Dodaj_alarm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(Dodaj_alarm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        n_nazwa_modelu = new QLineEdit(Dodaj_alarm);
        n_nazwa_modelu->setObjectName(QString::fromUtf8("n_nazwa_modelu"));

        horizontalLayout_5->addWidget(n_nazwa_modelu);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        pushButton = new QPushButton(Dodaj_alarm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_9->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_9, 8, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Dodaj_alarm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        n_klasa_systemu = new QSlider(Dodaj_alarm);
        n_klasa_systemu->setObjectName(QString::fromUtf8("n_klasa_systemu"));
        n_klasa_systemu->setMaximum(10);
        n_klasa_systemu->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(n_klasa_systemu);

        label_10 = new QLabel(Dodaj_alarm);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(Dodaj_alarm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        n_pobor_mocy = new QSlider(Dodaj_alarm);
        n_pobor_mocy->setObjectName(QString::fromUtf8("n_pobor_mocy"));
        n_pobor_mocy->setMaximum(500);
        n_pobor_mocy->setSingleStep(10);
        n_pobor_mocy->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(n_pobor_mocy);

        label_11 = new QLabel(Dodaj_alarm);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(Dodaj_alarm);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_6->addWidget(label_12);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(Dodaj_alarm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        n_liczba_zgloszen = new QSlider(Dodaj_alarm);
        n_liczba_zgloszen->setObjectName(QString::fromUtf8("n_liczba_zgloszen"));
        n_liczba_zgloszen->setMaximum(25);
        n_liczba_zgloszen->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(n_liczba_zgloszen);

        label_9 = new QLabel(Dodaj_alarm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);


        gridLayout->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(Dodaj_alarm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        n_przycisk_napadowy = new QCheckBox(Dodaj_alarm);
        n_przycisk_napadowy->setObjectName(QString::fromUtf8("n_przycisk_napadowy"));

        horizontalLayout_7->addWidget(n_przycisk_napadowy);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Dodaj_alarm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        n_nazwa_systemu = new QLineEdit(Dodaj_alarm);
        n_nazwa_systemu->setObjectName(QString::fromUtf8("n_nazwa_systemu"));

        horizontalLayout_4->addWidget(n_nazwa_systemu);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dodaj_alarm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        n_stan = new QSlider(Dodaj_alarm);
        n_stan->setObjectName(QString::fromUtf8("n_stan"));
        n_stan->setMaximum(1);
        n_stan->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(n_stan);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(Dodaj_alarm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        n_zasilacz_awaryjny = new QCheckBox(Dodaj_alarm);
        n_zasilacz_awaryjny->setObjectName(QString::fromUtf8("n_zasilacz_awaryjny"));

        horizontalLayout_8->addWidget(n_zasilacz_awaryjny);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);


        retranslateUi(Dodaj_alarm);
        QObject::connect(n_pobor_mocy, SIGNAL(valueChanged(int)), label_11, SLOT(setNum(int)));
        QObject::connect(n_liczba_zgloszen, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(n_klasa_systemu, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Dodaj_alarm);
    } // setupUi

    void retranslateUi(QDialog *Dodaj_alarm)
    {
        Dodaj_alarm->setWindowTitle(QApplication::translate("Dodaj_alarm", "Dodaj System Alarmowy", nullptr));
        label_4->setText(QApplication::translate("Dodaj_alarm", "Model", nullptr));
        n_nazwa_modelu->setText(QApplication::translate("Dodaj_alarm", "Nowy model", nullptr));
        pushButton->setText(QApplication::translate("Dodaj_alarm", "Dodaj", nullptr));
        label_3->setText(QApplication::translate("Dodaj_alarm", "Klasa systemu", nullptr));
        label_10->setText(QApplication::translate("Dodaj_alarm", "   0", nullptr));
        label_5->setText(QApplication::translate("Dodaj_alarm", "Pob\303\263r mocy", nullptr));
        label_11->setText(QApplication::translate("Dodaj_alarm", "   0", nullptr));
        label_12->setText(QApplication::translate("Dodaj_alarm", "W", nullptr));
        label_8->setText(QApplication::translate("Dodaj_alarm", "Liczba zg\305\202osze\305\204", nullptr));
        label_9->setText(QApplication::translate("Dodaj_alarm", "   0", nullptr));
        label_6->setText(QApplication::translate("Dodaj_alarm", "Przycisk napadowy", nullptr));
        n_przycisk_napadowy->setText(QString());
        label->setText(QApplication::translate("Dodaj_alarm", "Nazwa", nullptr));
        n_nazwa_systemu->setText(QApplication::translate("Dodaj_alarm", "Nowy System Alarmowy", nullptr));
        label_2->setText(QApplication::translate("Dodaj_alarm", "Stan: WY\305\201/W\305\201", nullptr));
        label_7->setText(QApplication::translate("Dodaj_alarm", "Zasilacz awaryjny", nullptr));
        n_zasilacz_awaryjny->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dodaj_alarm: public Ui_Dodaj_alarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DODAJ_ALARM_H
