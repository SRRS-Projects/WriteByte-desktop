
#include "mainwindow.h"

using namespace oclero;

MainWindow::MainWindow(QWidget *parent)
    : qlementine::FramelessWindow(parent)
    , m_windowTitle("WriteBite")
{
    setWindowTitle(m_windowTitle);
    resize(500, 300);

    m_globalScrollArea = new QScrollArea(this);
    m_windowContent = new QWidget(m_globalScrollArea);
    m_windowContent->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    m_windowContentLay = new QGridLayout(m_windowContent);

    setContentWidget(m_globalScrollArea);



    /**/


    /* Connections */

}

MainWindow::~MainWindow()
{
}

void MainWindow::closeEvent(QCloseEvent *event)
{

    qlementine::FramelessWindow::closeEvent(event);
}




