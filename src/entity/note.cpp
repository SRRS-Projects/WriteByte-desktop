
#include "note.h"

Note::Note()
{

}

Note Note::fromJson(const QJsonObject &json)
{
    Note result;



    return result;
}

QJsonObject Note::toJson() const
{
    QJsonObject json;



    return json;
}

void Note::setId(int id)
{
    m_id = id;
}

int Note::id()
{
    return m_id;
}

void Note::setTitle(const QString &title)
{
    m_title = title;
}

QString Note::title() const
{
    return m_title;
}

void Note::setContent(const QString &content)
{
    m_content = content;
}

QString Note::content() const
{
    return m_content;
}
