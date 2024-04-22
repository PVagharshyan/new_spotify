#ifndef SECTIONVIEW_H
#define SECTIONVIEW_H

#include "src/ui/components/section/section_one_part/section_one_part_view.h"

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

namespace ui
{
namespace components
{
class SectionView : public QWidget
{
public:
    explicit SectionView(QWidget* parent);

private:
    section::SectionOnePartView** m_section_parts = nullptr;
};
} // namespace components
} // namespace ui

#endif // SECTIONVIEW_H

