#include "central_area_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

CentralAreaView::CentralAreaView(QWidget *parent)
    : QWidget{parent}
{    
    setStyleSheet("QWidget {border: 1px solid black;}");

    QHBoxLayout* top_layout = new QHBoxLayout();
    QVBoxLayout* bottom_layout = new QVBoxLayout();
    QLabel* left_img = new QLabel("left img", this);
    QLabel* right_img = new QLabel("right img", this);
    QWidget* empty_widget = new QWidget(this);
    top_layout->addWidget(left_img, 10);
    top_layout->addWidget(right_img, 10);
    top_layout->addWidget(empty_widget, 80);

    const int section_count = 2;
    m_sections = new components::SectionView*[section_count];
    for (int i {}; i < section_count; ++i) {
        m_sections[i] = new components::SectionView(this);
        bottom_layout->addWidget(m_sections[i]);
    }

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addLayout(top_layout, 10);
    layout->addLayout(bottom_layout, 90);

    this->setLayout(layout);
}

}
}
