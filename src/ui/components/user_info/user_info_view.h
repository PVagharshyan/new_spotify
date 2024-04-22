#ifndef USERINFOVIEW_H
#define USERINFOVIEW_H

#include "src/ui/components/user_info/image_username/image_username_view.h"
#include "src/ui/components/user_info/friend_part/friend_part_view.h"

#include <QWidget>
#include <QAbstractItemView>
#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
class UserInfoView : public QWidget
{
public:
    explicit UserInfoView(QWidget* parent);
private:
    user_info::ImageUsernameView* m_image_username_view;
    user_info::FriendPartView* m_friend_part_view;
};
}
}

#endif // USERINFOVIEW_H
