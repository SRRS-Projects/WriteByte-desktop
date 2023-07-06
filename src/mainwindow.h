
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <oclero/qlementine/widgets/FramelessWindow.hpp>
#include <oclero/qlementine/widgets/LineEdit.hpp>
#include <oclero/qlementine/widgets/Switch.hpp>
#include <QGridLayout>
#include <QScrollArea>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QPushButton>



using namespace oclero;

class MainWindow : public qlementine::FramelessWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:

private:
    QScrollArea *m_globalScrollArea;
    QWidget *m_windowContent;

    QGridLayout *m_windowContentLay;


    QString m_windowTitle;

};

#endif // MAINWINDOW_H
