#include "friend_part_view.h"

namespace ui
{
namespace components
{
namespace user_info
{

FriendPartView::FriendPartView(QWidget* parent)
    : QWidget(parent)
{
    QHBoxLayout* friend_layout = new QHBoxLayout();
    m_songs = new friend_part::PartsView(this);
    m_followers = new friend_part::PartsView(this);
    m_following = new friend_part::PartsView(this);
    friend_layout->addWidget(m_songs);
    friend_layout->addWidget(m_followers);
    friend_layout->addWidget(m_following);
    this->setLayout(friend_layout);
}

}
}
}
