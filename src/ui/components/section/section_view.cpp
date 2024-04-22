#include "section_view.h"

namespace ui
{
namespace components
{
SectionView::SectionView(QWidget* parent)
    : QWidget(parent)
{
    const int sections_count = 5;
    QVBoxLayout* layout = new QVBoxLayout();

    QVBoxLayout* top_layout = new QVBoxLayout();

    QLabel* section_title = new QLabel("Section title", this);
    top_layout->addWidget(section_title);
    layout->addLayout(top_layout, 10);

    QHBoxLayout* sections_layout = new QHBoxLayout();
    m_section_parts = new section::SectionOnePartView*[sections_count];
    for (int i {}; i < sections_count; ++i) {
        m_section_parts[i] = new section::SectionOnePartView(this);
        sections_layout->addWidget(m_section_parts[i], 20);
    }
    layout->addLayout(sections_layout, 90);

    setLayout(layout);
}
} // namespace components
} // namespace ui
