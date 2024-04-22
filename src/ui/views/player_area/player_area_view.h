#ifndef PLAYERAREAVIEW_H
#define PLAYERAREAVIEW_H

#include "src/ui/components/player_song/player_song_view.h"
#include "src/ui/components/management/management_view.h"

#include <QWidget>
#include <QComboBox>

namespace ui
{
namespace views
{

class PlayerAreaView : public QWidget
{
    Q_OBJECT
public:
    explicit PlayerAreaView(QWidget *parent = nullptr);

signals:

private:
    components::PlayerSongView* m_song;
    components::Management* m_managment;
    QComboBox* m_combo_box;
    QLabel* m_next_song;
};


} // namespace views
} // namespace ui

#endif // PLAYERAREAVIEW_H
