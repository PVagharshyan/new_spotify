#ifndef RIGHTSIDEBARVIEW_H
#define RIGHTSIDEBARVIEW_H

#include "src/ui/components/user/user_view.h"

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>

namespace ui
{
namespace views
{

class RightSidebarView : public QWidget
{
    Q_OBJECT
public:
    explicit RightSidebarView(QWidget *parent = nullptr);

signals:
private:
    components::UserView** m_users = nullptr;
};

} // namespace views
} // namespace ui

#endif // RIGHTSIDEBARVIEW_H
