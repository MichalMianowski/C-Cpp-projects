#ifndef DODAJOBIEKT_H
#define DODAJOBIEKT_H

#include <QAbstractListModel>

class DodajObiekt : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit DodajObiekt(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // DODAJOBIEKT_H
