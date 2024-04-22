#ifndef NAMECOUNTVIEW_H
#define NAMECOUNTVIEW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

namespace ui
{
namespace components
{
class NameCountView : public QWidget
{
public:
    explicit NameCountView(QWidget* parent);
private:
    QWidget* m_name;
    QWidget* m_count;
};
} // namespace components
} // namespace ui

#endif // NAMECOUNTVIEW_H
