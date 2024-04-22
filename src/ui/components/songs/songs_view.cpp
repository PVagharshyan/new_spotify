#include "songs_view.h"

namespace ui
{
namespace components
{
SongsView::SongsView(QWidget* parent)
    : QWidget(parent)
{
    this->setObjectName("NavAreaView");
    this->setStyleSheet("#NavAreaView {border: 1px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);
    //Suppose at this point we made a request from the db and received 3 playlists for the given user.
    const int count_playlists = 3;
    m_songs = new SongView*[count_playlists];
    for (int i {}; i < count_playlists; ++i) {
        SongView* current_song = new SongView(this);
        layout->addWidget(current_song);
        m_songs[i] = current_song;
    }
    this->setLayout(layout);
}
}
}
