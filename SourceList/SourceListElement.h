#ifndef SOURCELISTELEMENT_H
#define SOURCELISTELEMENT_H

#include <QString>

class SourceListElement
{
public:
    SourceListElement(QString &size, QString &type):
        m_size(size),
        m_type(type){}
private:
    QString m_size;
    QString m_type;
public:
    void setSize(QString size);
    void setType(QString type);

    QString getSize() const;
    QString getType() const;
};

#endif // SOURCELISTELEMENT_H
