#ifndef CENTRALAREAVIEW_H
#define CENTRALAREAVIEW_H

#include "src/ui/components/section/section_view.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

class CentralAreaView : public QWidget
{
    Q_OBJECT
public:
    explicit CentralAreaView(QWidget *parent = nullptr);

signals:

private:
    components::SectionView** m_sections = nullptr;
};


} // namespace views
} // namespace ui


#endif // CENTRALAREAVIEW_H
