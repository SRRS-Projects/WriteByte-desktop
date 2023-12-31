
#include "mainwindow.h"
#include "network/web_manager.h"

using namespace oclero;

MainWindow::MainWindow(QWidget *parent)
    : qlementine::FramelessWindow(parent)
    , m_windowTitle("WriteByte")
{
    setWindowTitle(m_windowTitle);
    resize(500, 300);

    //g_WebManager::Instance();
    //g_WebManager::Instance()->test();


    m_globalScrollArea = new QScrollArea(this);
    m_windowContent = new QWidget(m_globalScrollArea);
    //m_windowContent->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    m_windowContentLay = new QGridLayout(m_windowContent);

    m_globalScrollArea->setWidget(m_windowContent);
    m_globalScrollArea->setWidgetResizable(true);
    setContentWidget(m_globalScrollArea);

    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (i == 0 && j == 1)
            {
                m_noteTile = new NoteTile(count, QString("Note #%1").arg(count), "Hello, World!", m_windowContent);
            }
            else
            {
                m_noteTile = new NoteTile(count, QString("Note #%1").arg(count), "Hello, World!\nIt's a long, long text inside", m_windowContent);
            }
            m_windowContentLay->addWidget(m_noteTile, i, j);
            count++;
        }
    }




    /**/


    /* Connections */

    QNetworkReply *r = g_WebManager::Instance()->requestNotes();
    connect(r, &QNetworkReply::finished, this, [this, r]()
            {
                onGetNotes(r);
            });

}

MainWindow::~MainWindow()
{
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    qlementine::FramelessWindow::closeEvent(event);
}

void MainWindow::onGetNotes(QNetworkReply *reply)
{
    qDebug() << reply->readAll();
}




