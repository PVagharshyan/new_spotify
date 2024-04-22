#include "header_view.h"

namespace ui
{
namespace views
{

HeaderView::HeaderView(QWidget *parent)
    : QWidget{parent}
{
    QLineEdit *searchField = new QLineEdit(this);
    searchField->setPlaceholderText("Search...");

    this->setStyleSheet(
        "QLineEdit {"
            "border: 2px solid #ccc;"
            "border-radius: 10px;"
            "padding: 5px;"
        "}"
    );

    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->addWidget(searchField, 90);
    QWidget* img_1 = new QWidget(this);
    QWidget* img_2 = new QWidget(this);
    QLabel* img_1_label = new QLabel("img_1", this);
    QLabel* img_2_label = new QLabel("img_2", this);
    QVBoxLayout* img_1_layout = new QVBoxLayout;
    QVBoxLayout* img_2_layout = new QVBoxLayout;
    img_1_layout->addWidget(img_1_label);
    img_2_layout->addWidget(img_2_label);
    img_1->setLayout(img_1_layout);
    img_2->setLayout(img_2_layout);
    layout->addWidget(img_1);
    layout->addWidget(img_2);
    this->setLayout(layout);
}


} // namespace views
} // namespace ui
