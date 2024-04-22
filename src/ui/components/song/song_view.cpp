#include "song_view.h"

namespace ui
{
namespace components
{

Image::Image(QWidget* parent)
    : QWidget(parent)
{}

SongView::SongView(QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* song_layout = new QHBoxLayout();
    m_image = new Image(this);
    m_image->setStyleSheet("QWidget {border : 1px solid green; }");
    m_name_count_view = new NameCountView(this);
    QLabel* image_text = new QLabel("img", this);
    QVBoxLayout* image_layout = new QVBoxLayout();
    image_layout->addWidget(image_text);
    m_image->setLayout(image_layout);
    song_layout->addWidget(m_image);
    song_layout->addWidget(m_name_count_view, 80);
    setLayout(song_layout);
}

} // namespace components
} // namespace ui
