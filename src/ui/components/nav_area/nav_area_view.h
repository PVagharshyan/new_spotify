#ifndef NAVAREAVIEW_H
#define NAVAREAVIEW_H

#include <QWidget>
#include <QAbstractItemView>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

namespace ui
{
namespace components
{
class NavAreaView : public QWidget
{
public:
    explicit NavAreaView(QWidget* parent);
};
}
}

#endif // NAVAREAVIEW_H
