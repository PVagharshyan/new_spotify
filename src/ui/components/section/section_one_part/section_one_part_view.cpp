// section_one_part_view.cpp
#include "section_one_part_view.h"

namespace ui
{
namespace components
{
namespace section
{
SectionOnePartView::SectionOnePartView(QWidget* parent)
    : QWidget(parent)
{
    m_img = new QLabel("img", this);
    m_name = new QLabel("name", this);
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(m_img, 80);
    layout->addWidget(m_name, 20);
    setLayout(layout);
}
} // namespace section
} // namespace components
} // namespace ui
