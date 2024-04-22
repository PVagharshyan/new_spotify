#ifndef FRIENDPARTVIEW_H
#define FRIENDPARTVIEW_H

#include "src/ui/components/user_info/friend_part/parts/parts_view.h"

#include <QWidget>
#include <QHBoxLayout>

namespace ui
{
namespace components
{
namespace user_info
{

class FriendPartView : public QWidget
{
public:
    explicit FriendPartView(QWidget* parent);

private:
    friend_part::PartsView* m_songs;
    friend_part::PartsView* m_followers;
    friend_part::PartsView* m_following;
};
}
}
}

#endif // FRIENDPARTVIEWH
