#include "footer_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

FooterView::FooterView(QWidget *parent)
    : QWidget{parent}
{
    QLabel* title = new QLabel("Footer", this);

    this->setStyleSheet("QWidget {border: 2px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(title);
    this->setLayout(layout);
}

} // namespace views
} // namespace ui

