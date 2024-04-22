#include "left_sidebar_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

LeftSidebarView::LeftSidebarView(QWidget *parent)
    : QWidget{parent}
{
    m_logo_area_view = new components::LogoAreaView(this);
    m_nav_area_view = new components::NavAreaView(this);
    m_songs_view = new components::SongsView(this);
    m_user_info_view = new components::UserInfoView(this);

    QVBoxLayout* left_sidebar_leyout = new QVBoxLayout();
    left_sidebar_leyout->addWidget(m_logo_area_view, 20);
    QVBoxLayout* user_info_with_navbar = new QVBoxLayout();
    user_info_with_navbar->addWidget(m_user_info_view, 80);
    user_info_with_navbar->addWidget(m_nav_area_view, 20);
    left_sidebar_leyout->addLayout(user_info_with_navbar,20);
    left_sidebar_leyout->addWidget(m_songs_view, 50);

    QVBoxLayout* new_playlist_butten_layout = new QVBoxLayout();
    QPushButton* button_new_playlist_button = new QPushButton(this);
    button_new_playlist_button->setText("New Playlist");
    new_playlist_butten_layout->addWidget(button_new_playlist_button);
    left_sidebar_leyout->addLayout(new_playlist_butten_layout);

    this->setLayout(left_sidebar_leyout);
}

} // namespace views
} // namespace ui
