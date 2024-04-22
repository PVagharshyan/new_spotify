#include "main_window.h"

#include "src/ui/views/header/header_view.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* central_widget = new QWidget(this);

    QLabel* home = new QLabel("home", this);
    home->setStyleSheet("QLabel {border : 1px solid green; }");

    m_central_area_view = new ui::views::CentralAreaView(this);
    m_right_sidebar_view = new ui::views::RightSidebarView(this);
    QHBoxLayout* center_right_layout = new QHBoxLayout();
    center_right_layout->addWidget(m_central_area_view, 80);
    center_right_layout->addWidget(m_right_sidebar_view, 20);

    QVBoxLayout* center_with_header_layout = new QVBoxLayout();
    m_header_view = new ui::views::HeaderView(this);
    center_with_header_layout->addWidget(m_header_view, 10);
    center_with_header_layout->addLayout(center_right_layout, 90);

    QHBoxLayout* top_layout = new QHBoxLayout();
    m_left_sidebar_view = new ui::views::LeftSidebarView(this);
    top_layout->addWidget(m_left_sidebar_view, 10);
    top_layout->addLayout(center_with_header_layout, 90);

    QVBoxLayout* top_with_player_layout = new QVBoxLayout();
    m_player_view = new ui::views::PlayerAreaView(this);
    top_with_player_layout->addLayout(top_layout, 80);
    top_with_player_layout->addWidget(m_player_view, 20);

    QVBoxLayout* main_layout = new QVBoxLayout(central_widget);
    m_footer_view = new ui::views::FooterView(this);
    main_layout->addWidget(home, 5);
    main_layout->addLayout(top_with_player_layout, 90);
    main_layout->addWidget(m_footer_view, 5);

    setCentralWidget(central_widget);
}

MainWindow::~MainWindow() {}
