#include "player_song_view.h"

namespace ui
{
namespace components
{
PlayerSongView::PlayerSongView(QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout();
    m_image = new QLabel("img", this);
    layout->addWidget(m_image);
    QVBoxLayout* right_layout = new QVBoxLayout();
    m_title = new QLabel("Song Title", this);
    m_artist_name = new QLabel("Artist Name", this);
    right_layout->addWidget(m_title);
    right_layout->addWidget(m_artist_name);
    layout->addLayout(right_layout);
    setLayout(layout);
}
} // namesapce components
} // namespace ui
