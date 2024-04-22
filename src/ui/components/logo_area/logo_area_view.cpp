#include "logo_area_view.h"

namespace ui
{
namespace components
{
LogoAreaView::LogoAreaView(QWidget* parent)
    : QWidget(parent)
{
    QLabel* title = new QLabel("Logo", this);
    this->setObjectName("LogoAreaView");
    this->setStyleSheet("#LogoAreaView {border: 1px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(title);
    this->setLayout(layout);
}
}
}
