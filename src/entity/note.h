
#ifndef NOTE_H
#define NOTE_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include <QJsonObject>


class Note
{
    Q_GADGET
public:
    Note();

    static Note fromJson(const QJsonObject &json);
    QJsonObject toJson() const;

    void setId(int id);
    int id();

    void setTitle(const QString &title);
    QString title() const;

    void setContent(const QString &content);
    QString content() const;

private:
    int m_id = 0;
    QString m_title;
    QString m_content;
    QDateTime m_createdDateTime;
};

#endif // NOTE_H
