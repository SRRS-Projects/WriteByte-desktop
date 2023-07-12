
#ifndef DATAMANAGER_H
#define DATAMANAGER_H


#include <QObject>
#include <QHash>

#include "../entity/singleton.h"
#include "../entity/note.h"


class DataManager : public QObject
{
    Q_OBJECT
public:
    explicit DataManager(QObject *parent = nullptr);
    virtual ~DataManager();


    QHash<int, Note *> &notes();

signals:


private slots:


private:
    QHash<int, Note*> m_notes;

};

typedef Singleton<DataManager> g_DataManager;

#endif // DATAMANAGER_H
