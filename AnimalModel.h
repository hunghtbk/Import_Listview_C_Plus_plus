#ifndef ANIMALMODEL_H
#define ANIMALMODEL_H
#include <QAbstractListModel>
#include <QStringList>
#include "AnimalElement.h"

class AnimalModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum AnimalRoles {
        TypeRole = Qt::UserRole + 1,
        SizeRole
    };

    AnimalModel(QObject *parent = 0);

    void addAnimal(const AnimalElement &animalElement);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<AnimalElement> m_listAnimals;
};
#endif // ANIMALMODEL_H
