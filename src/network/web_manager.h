
#ifndef WEBMANAGER_H
#define WEBMANAGER_H


#include <QObject>
#include <QNetworkAccessManager>

#include "../entity/singleton.h"
#include "../entity/note.h"


class WebManager : public QObject
{
    Q_OBJECT
public:
    explicit WebManager(QObject *parent = nullptr);
    virtual ~WebManager();

    void requestNotes();

signals:
    void onGetNotes();

private slots:
    void onGetNotesSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager *m_networkAccessManager;

};

typedef Singleton<WebManager> g_WebManager;

#endif // WEBMANAGER_H
