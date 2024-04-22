#ifndef LEFTSIDEBARVIEW_H
#define LEFTSIDEBARVIEW_H

#include <QWidget>
#include <QPushButton>

#include "src/ui/components/logo_area/logo_area_view.h"
#include "src/ui/components/nav_area/nav_area_view.h"
#include "src/ui/components/songs/songs_view.h"
#include "src/ui/components/user_info/user_info_view.h"

namespace ui
{
namespace views
{

class LeftSidebarView : public QWidget
{
    Q_OBJECT
public:
    explicit LeftSidebarView(QWidget *parent = nullptr);

signals:

private:
    ui::components::LogoAreaView* m_logo_area_view;
    ui::components::NavAreaView* m_nav_area_view;
    ui::components::SongsView* m_songs_view;
    ui::components::UserInfoView* m_user_info_view;
};

} // namespace views
} // namespace ui

#endif // LEFTSIDEBARVIEW_H
