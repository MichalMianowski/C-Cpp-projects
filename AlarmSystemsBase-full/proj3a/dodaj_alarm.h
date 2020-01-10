#ifndef DODAJ_ALARM_H
#define DODAJ_ALARM_H

#include <QDialog>
#include "backend/SysAlarm.h"
#include <vector>
#include "backend/SysOchronne.h"


namespace Ui {
class Dodaj_alarm;
}

class Dodaj_alarm : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_alarm(QWidget *parent = nullptr);
    ~Dodaj_alarm();
    vector <SysOchronne*> *wektor_obiektow;
    void przekazWektor(vector <SysOchronne*> *pWektor);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dodaj_alarm *ui;
};

#endif // DODAJ_ALARM_H
