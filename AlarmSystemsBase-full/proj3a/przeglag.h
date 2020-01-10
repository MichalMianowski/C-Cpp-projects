#ifndef PRZEGLAG_H
#define PRZEGLAG_H

#include <QDialog>
#include <vector>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QPixmap>
#include "backend/SysOchronne.h"
#include "backend/SysAlarm.h"
#include "backend/SysPpoz.h"
#include "backend/SysZraszaczy.h"

namespace Ui {
class Przeglag;
}

class Przeglag : public QDialog
{
    Q_OBJECT

public:
    explicit Przeglag(QWidget *parent = nullptr);
    ~Przeglag();
    vector <SysOchronne*> *wektor_obiektow;
    void przekazWektor(vector <SysOchronne*> *pWektor);
    void wyswietl();

private slots:
    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_doMenuButton_clicked();

    void on_usunButton_clicked();

private:
    Ui::Przeglag *ui;
    QGraphicsScene scene;
    QPixmap map;
};

#endif // PRZEGLAG_H
