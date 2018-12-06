#include "AnimalModel.h"

AnimalModel::AnimalModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

void AnimalModel::addAnimal(const AnimalElement &animalElement)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_listAnimals << animalElement;
    endInsertRows();
}

int AnimalModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);
    return m_listAnimals.count();
}

QVariant AnimalModel::data(const QModelIndex & index, int role) const {
    if (index.row() < 0 || index.row() >= m_listAnimals.count())
        return QVariant();

    const AnimalElement &animal = m_listAnimals[index.row()];
    if (role == TypeRole)
        return animal.type();
    else if (role == SizeRole)
        return animal.size();
    return QVariant();
}

QHash<int, QByteArray> AnimalModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[TypeRole] = "type";
    roles[SizeRole] = "size";
    return roles;
}
