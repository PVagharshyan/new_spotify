#include "player_area_view.h"

#include <QLabel>
#include <QVBoxLayout>

namespace ui
{
namespace views
{

PlayerAreaView::PlayerAreaView(QWidget *parent)
    : QWidget{parent}
{
    this->setStyleSheet("QWidget {border: 1px solid black;}");

    QHBoxLayout* layout = new QHBoxLayout(this);

    m_song = new components::PlayerSongView(this);
    m_managment = new components::Management(this);
    QVBoxLayout* right_layout = new QVBoxLayout();
    m_combo_box = new QComboBox(this);
    m_combo_box->addItem("Send To a Frined ...");
    m_next_song = new QLabel("next song name", this);
    right_layout->addWidget(m_combo_box);
    right_layout->addWidget(m_next_song);
    layout->addWidget(m_song, 20);
    layout->addWidget(m_managment, 60);
    layout->addLayout(right_layout, 20);
    this->setLayout(layout);
}

}
}
