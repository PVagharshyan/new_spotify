#include "name_count_view.h"

namespace ui
{
namespace components
{
NameCountView::NameCountView(QWidget* parent)
    : QWidget(parent)
{
    this->setObjectName("NameCountView");
    this->setStyleSheet("#NameCountView {border: 1px solid green;}");

    m_name = new QWidget(this);
    m_count = new QWidget(this);
    QVBoxLayout* name_layout = new QVBoxLayout();
    QVBoxLayout* count_layout = new QVBoxLayout();
    QLabel* name_label = new QLabel("name", this);
    QLabel* count_label = new QLabel("count", this);
    name_layout->addWidget(name_label);
    count_layout->addWidget(count_label);
    m_name->setLayout(name_layout);
    m_count->setLayout(count_layout);
    QVBoxLayout* name_count_view_layout = new QVBoxLayout();
    name_count_view_layout->addWidget(m_name);
    name_count_view_layout->addWidget(m_count);
    this->setLayout(name_count_view_layout);
}

} // namespace components
} // namespace ui
