#ifndef HEADERVIEW_H
#define HEADERVIEW_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>

namespace ui
{
namespace views
{

class HeaderView : public QWidget
{
    Q_OBJECT
public:
    explicit HeaderView(QWidget *parent = nullptr);

signals:
};

} // namespace views
} // namespace ui

#endif // HEADERVIEW_H
