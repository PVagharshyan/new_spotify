#ifndef PARTSVIEW_H
#define PARTSVIEW_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
namespace user_info
{
namespace friend_part
{
class PartsView : public QWidget
{
public:
    explicit PartsView(QWidget* parent);
private:
    QWidget* m_image;
    QWidget* m_username;
};
}
}
}
}

#endif // PARTSVIEW_H
