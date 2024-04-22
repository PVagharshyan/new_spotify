#include "image_username_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace components
{
namespace user_info
{
ImageUsernameView::ImageUsernameView(QWidget* parent)
    : QWidget(parent)
{
    QLabel* label = new QLabel("username and image", this);
    QVBoxLayout* title = new QVBoxLayout();
    title->addWidget(label);
    this->setLayout(title);
}
}
}
}
