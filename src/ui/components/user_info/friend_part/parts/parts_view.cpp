#include "parts_view.h"

namespace ui
{
namespace components
{

namespace user_info
{
namespace friend_part
{
PartsView::PartsView(QWidget* parent)
    : QWidget(parent)
{
    QLabel* image = new QLabel("img", this);
    image->setStyleSheet("QLabel {border : 1px solid green}");
    QVBoxLayout* image_layout = new QVBoxLayout();
    image_layout->addWidget(image);
    QLabel* username = new QLabel("count", this);
    username->setStyleSheet("QLabel {border : 1px solid green}");
    QVBoxLayout* username_layout = new QVBoxLayout();
    username_layout->addWidget(username);

    m_image = new QWidget(this);
    m_image->setLayout(image_layout);
    m_username = new QWidget(this);
    m_username->setLayout(username_layout);

    QHBoxLayout* user_layout = new QHBoxLayout();
    user_layout->addWidget(m_image);
    user_layout->addWidget(m_username);

    this->setLayout(user_layout);
}
}
}
}
}
