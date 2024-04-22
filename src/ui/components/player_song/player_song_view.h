#ifndef PLAYERSONGVIEW_H
#define PLAYERSONGVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace ui
{
namespace components
{
class PlayerSongView : public QWidget
{
public:
    explicit PlayerSongView(QWidget* parent);

private:
    QLabel* m_image;
    QLabel* m_title;
    QLabel* m_artist_name;
};
} // namespace components
} // namespace ui

#endif // PLAYERSONGVIEW_H
