#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QWidget>
#include <QLabel>
#include <QProgressBar>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
class Management : public QWidget
{
public:
    explicit Management(QWidget* parent);

private:
    QPushButton* m_left;
    QPushButton* m_stop;
    QPushButton* m_right;
    QPushButton* m_rand;
    QPushButton* m_cycle;
    QProgressBar* m_progress;
};
} // namespace components
} // namespace ui

#endif // MANAGEMENT_H
