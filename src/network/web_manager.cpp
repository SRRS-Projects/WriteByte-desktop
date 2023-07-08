
#include <QDebug>

#include "web_manager.h"


WebManager::WebManager(QObject *parent)
    : QObject{parent}
    , m_networkAccessManager(new QNetworkAccessManager)
{
    qDebug() << "WebManager::WebManager";
}

WebManager::~WebManager() {}

QNetworkReply *WebManager::requestNotes()
{
    return m_networkAccessManager->get(QNetworkRequest(QUrl("https://hrai.space/api/v1/get/followed/1")));
}




