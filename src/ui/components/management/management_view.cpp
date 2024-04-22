#include "management_view.h"

namespace ui
{
namespace components
{
Management::Management(QWidget* parent)
    : QWidget(parent)
{
    QWidget* left_empty = new QWidget(this);
    QWidget* right_empty = new QWidget(this);
    QHBoxLayout* center_layout = new QHBoxLayout();
    m_left = new QPushButton("left", this);
    m_right = new QPushButton("right", this);
    m_stop = new QPushButton("stop", this);
    m_rand = new QPushButton("rand", this);
    m_cycle = new QPushButton("cycle", this);
    center_layout->addWidget(m_rand);
    center_layout->addWidget(m_left);
    center_layout->addWidget(m_stop);
    center_layout->addWidget(m_right);
    center_layout->addWidget(m_cycle);
    QHBoxLayout* top_layout = new QHBoxLayout();
    top_layout->addWidget(left_empty);
    top_layout->addLayout(center_layout);
    top_layout->addWidget(right_empty);

    m_progress = new QProgressBar(this);
    m_progress->setValue(10);
    m_progress->setTextVisible(false);
    QLabel* left_label_min = new QLabel("0:22", this);
    QLabel* right_label_min = new QLabel("3:03", this);
    QHBoxLayout* progress_layout = new QHBoxLayout();
    progress_layout->addWidget(left_label_min, 5);
    progress_layout->addWidget(m_progress, 90);
    progress_layout->addWidget(right_label_min, 5);

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addLayout(top_layout);
    layout->addLayout(progress_layout);
    setLayout(layout);
}
} // namespace components
} // namespace ui
