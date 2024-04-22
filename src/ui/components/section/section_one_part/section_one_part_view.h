#ifndef SECTIONONEPARTVIEW_H
#define SECTIONONEPARTVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
namespace section
{
class SectionOnePartView : public QWidget
{
public:
    explicit SectionOnePartView(QWidget* parent);
private:
    QLabel* m_img;
    QLabel* m_name;
};
} // namespace section
} // namespace components
} // namespace ui

#endif // SECTIONONEPARTVIEW_H
