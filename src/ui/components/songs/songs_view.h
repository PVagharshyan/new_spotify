#ifndef SONGSVIEW_H
#define SONGSVIEW_H

#include "src/ui/components/song/song_view.h"

#include <QWidget>
#include <QAbstractItemView>
#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
class SongsView : public QWidget
{
public:
    explicit SongsView(QWidget* parent);

private:
    SongView** m_songs = nullptr;
};
}
}

#endif // SONGSVIEW_H
