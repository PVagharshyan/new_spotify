#include "user_view.h"

namespace ui
{
namespace components
{
UserView::UserView(QWidget* parent)
    : QWidget(parent)
{
    m_img = new QLabel("img", this);
    m_name = new QLabel("Friend Name", this);
    m_state = new QLabel("Now listing to", this);
    m_song = new QLabel("Song Title - Artist Name", this);
    QVBoxLayout* right_left_layout = new QVBoxLayout();
    right_left_layout->addWidget(m_name);
    right_left_layout->addWidget(m_state);
    QHBoxLayout* left_top_layout = new QHBoxLayout();
    left_top_layout->addWidget(m_img);
    left_top_layout->addLayout(right_left_layout);
    QVBoxLayout* left_layout = new QVBoxLayout();
    left_layout->addLayout(left_top_layout, 80);
    left_layout->addWidget(m_song, 20);
    QVBoxLayout* right_layout = new QVBoxLayout();
    QLabel* top_img = new QLabel("img", this);
    QLabel* bottom_img = new QLabel("img", this);
    right_layout->addWidget(top_img);
    right_layout->addWidget(bottom_img);
    QHBoxLayout* layout = new QHBoxLayout();
    layout->addLayout(left_layout, 80);
    layout->addLayout(right_layout, 20);
    setLayout(layout);
}
}
}
