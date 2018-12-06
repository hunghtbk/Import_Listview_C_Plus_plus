#ifndef ANIMALELEMENT_H
#define ANIMALELEMENT_H
#include <QString>

class AnimalElement
{
public:
    AnimalElement(const QString &type, const QString &size);

    QString type() const;
    QString size() const;

private:
    QString m_type;
    QString m_size;
};

#endif // ANIMALELEMENT_H
