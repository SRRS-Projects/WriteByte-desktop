
#include "note_tile.h"

using namespace oclero;

NoteTile::NoteTile(int id, const QString &title, const QString &text, QWidget *parent)
    : QGroupBox(parent)
    , m_id(id)
    , m_title(title)
    , m_text(text)
{
    m_rootLay = new QVBoxLayout(this);
    m_previewLbl = new QLabel(text, this);
    m_previewLbl->setWordWrap(true);
    m_rootLay->addWidget(m_previewLbl);

    /* Presetting */
    setTitle(m_title);

    /* Connections */
}

NoteTile::~NoteTile()
{
}

void NoteTile::setText(const QString &text)
{
    m_previewLbl->setText(text);
}

void NoteTile::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "Pressed, id: " << m_id;
    emit clickedID(m_id);
}


