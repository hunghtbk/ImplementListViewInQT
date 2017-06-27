#include "SourceListElement.h"

void SourceListElement::setSize(QString size)
{
    m_size = size;
}

void SourceListElement::setType(QString type)
{
    m_type = type;
}

QString SourceListElement::getSize() const
{
    return m_size;
}

QString SourceListElement::getType() const
{
    return m_type;
}
