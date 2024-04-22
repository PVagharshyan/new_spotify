#ifndef USERVIEW_H
#define USERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace ui
{
namespace components
{
class UserView : public QWidget
{
public:
    explicit UserView(QWidget* parent);
private:
    QLabel* m_img;
    QLabel* m_name;
    QLabel* m_state;
    QLabel* m_song;
};
} // namespace components
} // namesapce ui

#endif // USERVIEW_H
