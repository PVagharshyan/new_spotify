#include "nav_area_view.h"

namespace ui
{
namespace components
{
NavAreaView::NavAreaView(QWidget* parent)
    : QWidget(parent)
{
    this->setObjectName("NavAreaView");
    this->setStyleSheet("#NavAreaView {border: 1px solid black;}");

    QHBoxLayout* layout = new QHBoxLayout(this);

    QWidget* empty_widget = new QWidget(this);
    layout->addWidget(empty_widget, 50);

    QHBoxLayout* right_layout = new QHBoxLayout(this);
    QPushButton* playlists = new QPushButton(this);
    playlists->setText("Playlists");
    QPushButton* artists = new QPushButton(this);
    artists->setText("Artists");
    QPushButton* songs = new QPushButton(this);
    songs->setText("Songs");
    playlists->setStyleSheet("QPushButton {border : 1px solid green;border-top-right-radius: 10px;}");
    artists->setStyleSheet("QPushButton {border : 1px solid green;border-top-right-radius: 10px;}");
    songs->setStyleSheet("QPushButton {border : 1px solid green;border-top-right-radius: 10px;}");
    right_layout->addWidget(playlists);
    right_layout->addWidget(artists);
    right_layout->addWidget(songs);
    layout->addLayout(right_layout, 50);

    this->setLayout(layout);
}
}
}
