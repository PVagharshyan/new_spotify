#include "user_info_view.h"

namespace ui
{
namespace components
{
UserInfoView::UserInfoView(QWidget* parent)
    : QWidget(parent), m_image_username_view(new user_info::ImageUsernameView(this)), m_friend_part_view(new user_info::FriendPartView(this))
{
    QVBoxLayout* user_info_layout = new QVBoxLayout();
    user_info_layout->addWidget(m_image_username_view);
    user_info_layout->addWidget(m_friend_part_view);
    setObjectName("UserInfoView");
    setStyleSheet("#UserInfoView { border: 1px solid red; }");
    this->setLayout(user_info_layout);
}

}
}
