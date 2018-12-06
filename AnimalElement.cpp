#include "AnimalElement.h"

AnimalElement::AnimalElement(const QString &type, const QString &size)
    : m_type(type), m_size(size)
{
}

QString AnimalElement::type() const
{
    return m_type;
}

QString AnimalElement::size() const
{
    return m_size;
}
