
#include <QDebug>

#include "data_manager.h"


DataManager::DataManager(QObject *parent)
    : QObject{parent}
{
    qDebug() << "DataManager::DataManager";
}

DataManager::~DataManager() {}

QHash<int, Note *> &DataManager::notes()
{
    return m_notes;
}






