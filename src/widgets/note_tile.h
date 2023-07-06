
#ifndef NOTETILE_H
#define NOTETILE_H

#include <oclero/qlementine/widgets/FramelessWindow.hpp>
#include <oclero/qlementine/widgets/LineEdit.hpp>
#include <oclero/qlementine/widgets/Switch.hpp>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QLabel>

#include <QDebug>


using namespace oclero;

class NoteTile : public QGroupBox
{
    Q_OBJECT

public:
    NoteTile(int id, const QString &title, const QString &text, QWidget *parent = nullptr);
    ~NoteTile();
    void setText(const QString &text);
protected:
    void mouseReleaseEvent(QMouseEvent  *event) override;
private slots:
signals:
    void clickedID(int id);
private:
    QLabel *m_previewLbl;

    QVBoxLayout *m_rootLay;

    int m_id;
    QString m_title;
    QString m_text;
};

#endif // NOTETILE_H
