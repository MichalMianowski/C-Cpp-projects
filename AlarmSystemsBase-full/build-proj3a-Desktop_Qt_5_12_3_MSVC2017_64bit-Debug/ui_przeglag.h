/********************************************************************************
** Form generated from reading UI file 'przeglag.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRZEGLAG_H
#define UI_PRZEGLAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Przeglag
{
public:
    QGridLayout *gridLayout;
    QLabel *p_tytul;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *h_foto_alarm;
    QSpacerItem *horizontalSpacer_3;
    QLabel *foto_alarm;
    QLabel *foto_ppoz;
    QLabel *foto_zrasz;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *l_nazwa;
    QTextBrowser *p_nazwa;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_stan;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *p_stan;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_liczba_zgloszen;
    QLCDNumber *p_liczba_zgloszen;
    QHBoxLayout *horizontalLayout_5;
    QLabel *l_klasa;
    QLCDNumber *p_klasa;
    QHBoxLayout *horizontalLayout_6;
    QLabel *l_nazwa_modelu;
    QTextBrowser *p_nazwa_modelu;
    QHBoxLayout *horizontalLayout;
    QLabel *l_pobor;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *p_pobor;
    QLabel *l_poborW;
    QHBoxLayout *horizontalLayout_7;
    QLabel *l_przycisk;
    QLCDNumber *p_przycisk;
    QHBoxLayout *horizontalLayout_8;
    QLabel *l_zasilacz;
    QLCDNumber *p_zasilacz;
    QHBoxLayout *horizontalLayout_9;
    QLabel *l_liczba_czujek;
    QLCDNumber *p_liczba_czujek;
    QHBoxLayout *horizontalLayout_10;
    QLabel *l_wrazliwosc_czujek;
    QLCDNumber *p_wrazliwosc_czujek;
    QHBoxLayout *horizontalLayout_11;
    QLabel *l_liczba_zraszaczy;
    QLCDNumber *p_liczba_zraszaczy;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *doMenuButton;
    QPushButton *usunButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prevButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *nextButton;

    void setupUi(QDialog *Przeglag)
    {
        if (Przeglag->objectName().isEmpty())
            Przeglag->setObjectName(QString::fromUtf8("Przeglag"));
        Przeglag->resize(476, 802);
        gridLayout = new QGridLayout(Przeglag);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        p_tytul = new QLabel(Przeglag);
        p_tytul->setObjectName(QString::fromUtf8("p_tytul"));
        QFont font;
        font.setPointSize(16);
        p_tytul->setFont(font);

        gridLayout->addWidget(p_tytul, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        h_foto_alarm = new QHBoxLayout();
        h_foto_alarm->setObjectName(QString::fromUtf8("h_foto_alarm"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        h_foto_alarm->addItem(horizontalSpacer_3);

        foto_alarm = new QLabel(Przeglag);
        foto_alarm->setObjectName(QString::fromUtf8("foto_alarm"));
        foto_alarm->setMinimumSize(QSize(386, 226));
        foto_alarm->setMaximumSize(QSize(300, 200));
        foto_alarm->setBaseSize(QSize(100, 100));
        foto_alarm->setPixmap(QPixmap(QString::fromUtf8(":/foto/alarm.jpg")));
        foto_alarm->setScaledContents(true);

        h_foto_alarm->addWidget(foto_alarm);

        foto_ppoz = new QLabel(Przeglag);
        foto_ppoz->setObjectName(QString::fromUtf8("foto_ppoz"));
        foto_ppoz->setMinimumSize(QSize(300, 200));
        foto_ppoz->setMaximumSize(QSize(300, 200));
        foto_ppoz->setBaseSize(QSize(100, 100));
        foto_ppoz->setPixmap(QPixmap(QString::fromUtf8(":/foto/ppoz.jpg")));
        foto_ppoz->setScaledContents(true);

        h_foto_alarm->addWidget(foto_ppoz);

        foto_zrasz = new QLabel(Przeglag);
        foto_zrasz->setObjectName(QString::fromUtf8("foto_zrasz"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(foto_zrasz->sizePolicy().hasHeightForWidth());
        foto_zrasz->setSizePolicy(sizePolicy);
        foto_zrasz->setMinimumSize(QSize(300, 200));
        foto_zrasz->setMaximumSize(QSize(300, 200));
        foto_zrasz->setBaseSize(QSize(100, 100));
        foto_zrasz->setPixmap(QPixmap(QString::fromUtf8(":/foto/zrasz.jpg")));
        foto_zrasz->setScaledContents(true);

        h_foto_alarm->addWidget(foto_zrasz);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        h_foto_alarm->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(h_foto_alarm);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        l_nazwa = new QLabel(Przeglag);
        l_nazwa->setObjectName(QString::fromUtf8("l_nazwa"));

        horizontalLayout_12->addWidget(l_nazwa);

        p_nazwa = new QTextBrowser(Przeglag);
        p_nazwa->setObjectName(QString::fromUtf8("p_nazwa"));
        sizePolicy.setHeightForWidth(p_nazwa->sizePolicy().hasHeightForWidth());
        p_nazwa->setSizePolicy(sizePolicy);
        p_nazwa->setMinimumSize(QSize(361, 0));
        p_nazwa->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_12->addWidget(p_nazwa);


        gridLayout->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_stan = new QLabel(Przeglag);
        l_stan->setObjectName(QString::fromUtf8("l_stan"));

        horizontalLayout_3->addWidget(l_stan);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        p_stan = new QTextBrowser(Przeglag);
        p_stan->setObjectName(QString::fromUtf8("p_stan"));
        sizePolicy.setHeightForWidth(p_stan->sizePolicy().hasHeightForWidth());
        p_stan->setSizePolicy(sizePolicy);
        p_stan->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(p_stan);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_liczba_zgloszen = new QLabel(Przeglag);
        l_liczba_zgloszen->setObjectName(QString::fromUtf8("l_liczba_zgloszen"));

        horizontalLayout_4->addWidget(l_liczba_zgloszen);

        p_liczba_zgloszen = new QLCDNumber(Przeglag);
        p_liczba_zgloszen->setObjectName(QString::fromUtf8("p_liczba_zgloszen"));

        horizontalLayout_4->addWidget(p_liczba_zgloszen);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        l_klasa = new QLabel(Przeglag);
        l_klasa->setObjectName(QString::fromUtf8("l_klasa"));

        horizontalLayout_5->addWidget(l_klasa);

        p_klasa = new QLCDNumber(Przeglag);
        p_klasa->setObjectName(QString::fromUtf8("p_klasa"));

        horizontalLayout_5->addWidget(p_klasa);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        l_nazwa_modelu = new QLabel(Przeglag);
        l_nazwa_modelu->setObjectName(QString::fromUtf8("l_nazwa_modelu"));

        horizontalLayout_6->addWidget(l_nazwa_modelu);

        p_nazwa_modelu = new QTextBrowser(Przeglag);
        p_nazwa_modelu->setObjectName(QString::fromUtf8("p_nazwa_modelu"));
        sizePolicy.setHeightForWidth(p_nazwa_modelu->sizePolicy().hasHeightForWidth());
        p_nazwa_modelu->setSizePolicy(sizePolicy);
        p_nazwa_modelu->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_6->addWidget(p_nazwa_modelu);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_pobor = new QLabel(Przeglag);
        l_pobor->setObjectName(QString::fromUtf8("l_pobor"));

        horizontalLayout->addWidget(l_pobor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        p_pobor = new QLCDNumber(Przeglag);
        p_pobor->setObjectName(QString::fromUtf8("p_pobor"));

        horizontalLayout->addWidget(p_pobor);

        l_poborW = new QLabel(Przeglag);
        l_poborW->setObjectName(QString::fromUtf8("l_poborW"));

        horizontalLayout->addWidget(l_poborW);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        l_przycisk = new QLabel(Przeglag);
        l_przycisk->setObjectName(QString::fromUtf8("l_przycisk"));

        horizontalLayout_7->addWidget(l_przycisk);

        p_przycisk = new QLCDNumber(Przeglag);
        p_przycisk->setObjectName(QString::fromUtf8("p_przycisk"));

        horizontalLayout_7->addWidget(p_przycisk);


        gridLayout->addLayout(horizontalLayout_7, 8, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        l_zasilacz = new QLabel(Przeglag);
        l_zasilacz->setObjectName(QString::fromUtf8("l_zasilacz"));

        horizontalLayout_8->addWidget(l_zasilacz);

        p_zasilacz = new QLCDNumber(Przeglag);
        p_zasilacz->setObjectName(QString::fromUtf8("p_zasilacz"));

        horizontalLayout_8->addWidget(p_zasilacz);


        gridLayout->addLayout(horizontalLayout_8, 9, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        l_liczba_czujek = new QLabel(Przeglag);
        l_liczba_czujek->setObjectName(QString::fromUtf8("l_liczba_czujek"));

        horizontalLayout_9->addWidget(l_liczba_czujek);

        p_liczba_czujek = new QLCDNumber(Przeglag);
        p_liczba_czujek->setObjectName(QString::fromUtf8("p_liczba_czujek"));

        horizontalLayout_9->addWidget(p_liczba_czujek);


        gridLayout->addLayout(horizontalLayout_9, 10, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        l_wrazliwosc_czujek = new QLabel(Przeglag);
        l_wrazliwosc_czujek->setObjectName(QString::fromUtf8("l_wrazliwosc_czujek"));

        horizontalLayout_10->addWidget(l_wrazliwosc_czujek);

        p_wrazliwosc_czujek = new QLCDNumber(Przeglag);
        p_wrazliwosc_czujek->setObjectName(QString::fromUtf8("p_wrazliwosc_czujek"));

        horizontalLayout_10->addWidget(p_wrazliwosc_czujek);


        gridLayout->addLayout(horizontalLayout_10, 11, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        l_liczba_zraszaczy = new QLabel(Przeglag);
        l_liczba_zraszaczy->setObjectName(QString::fromUtf8("l_liczba_zraszaczy"));

        horizontalLayout_11->addWidget(l_liczba_zraszaczy);

        p_liczba_zraszaczy = new QLCDNumber(Przeglag);
        p_liczba_zraszaczy->setObjectName(QString::fromUtf8("p_liczba_zraszaczy"));

        horizontalLayout_11->addWidget(p_liczba_zraszaczy);


        gridLayout->addLayout(horizontalLayout_11, 12, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        doMenuButton = new QPushButton(Przeglag);
        doMenuButton->setObjectName(QString::fromUtf8("doMenuButton"));

        horizontalLayout_14->addWidget(doMenuButton);

        usunButton = new QPushButton(Przeglag);
        usunButton->setObjectName(QString::fromUtf8("usunButton"));

        horizontalLayout_14->addWidget(usunButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_14, 13, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        prevButton = new QPushButton(Przeglag);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));

        horizontalLayout_2->addWidget(prevButton);

        horizontalSpacer_5 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        nextButton = new QPushButton(Przeglag);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_2->addWidget(nextButton);


        gridLayout->addLayout(horizontalLayout_2, 14, 0, 1, 1);


        retranslateUi(Przeglag);

        QMetaObject::connectSlotsByName(Przeglag);
    } // setupUi

    void retranslateUi(QDialog *Przeglag)
    {
        Przeglag->setWindowTitle(QApplication::translate("Przeglag", "Dialog", nullptr));
        p_tytul->setText(QApplication::translate("Przeglag", "Rodzaj systemu", nullptr));
        foto_alarm->setText(QString());
        foto_ppoz->setText(QString());
        foto_zrasz->setText(QString());
        l_nazwa->setText(QApplication::translate("Przeglag", "Nazwa systemu", nullptr));
        l_stan->setText(QApplication::translate("Przeglag", "Stan", nullptr));
        l_liczba_zgloszen->setText(QApplication::translate("Przeglag", "Liczba zg\305\202osze\305\204", nullptr));
        l_klasa->setText(QApplication::translate("Przeglag", "Klasa systemu", nullptr));
        l_nazwa_modelu->setText(QApplication::translate("Przeglag", "Nazwa modelu", nullptr));
        l_pobor->setText(QApplication::translate("Przeglag", "Pob\303\263r mocy", nullptr));
        l_poborW->setText(QApplication::translate("Przeglag", "W", nullptr));
        l_przycisk->setText(QApplication::translate("Przeglag", "Przycisk napadowy", nullptr));
        l_zasilacz->setText(QApplication::translate("Przeglag", "Zasilacz awaryjny", nullptr));
        l_liczba_czujek->setText(QApplication::translate("Przeglag", "Liczba czujek", nullptr));
        l_wrazliwosc_czujek->setText(QApplication::translate("Przeglag", "Wra\305\274liwo\305\233\304\207 czujek", nullptr));
        l_liczba_zraszaczy->setText(QApplication::translate("Przeglag", "Liczba zraszaczy", nullptr));
        doMenuButton->setText(QApplication::translate("Przeglag", "Do g\305\202\303\263wnego menu", nullptr));
        usunButton->setText(QApplication::translate("Przeglag", "Usu\305\204", nullptr));
        prevButton->setText(QApplication::translate("Przeglag", "Poprzedni", nullptr));
        nextButton->setText(QApplication::translate("Przeglag", "Nast\304\231pny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Przeglag: public Ui_Przeglag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRZEGLAG_H
