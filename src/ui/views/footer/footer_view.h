#ifndef FOOTERVIEW_H
#define FOOTERVIEW_H

#include <QWidget>

namespace ui
{
namespace views
{

class FooterView : public QWidget
{
    Q_OBJECT
public:
    explicit FooterView(QWidget *parent = nullptr);

signals:
};


} // namespace views
} // namespace ui

#endif // FOOTERVIEW_H
