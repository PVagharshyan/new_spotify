#include "right_sidebar_view.h"

namespace ui
{
namespace views
{

RightSidebarView::RightSidebarView(QWidget *parent)
    : QWidget{parent}
{
    QLineEdit *searchField = new QLineEdit(this);
    searchField->setPlaceholderText("Search...");
    searchField->setObjectName("searchField");
    searchField->setStyleSheet(
        "QLineEdit {"
        "border: 2px solid #ccc;"
        "border-radius: 10px;"
        "padding: 5px;"
        "}"
    );

    this->setStyleSheet("QWidget {border: 1px solid black;}");

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(searchField, 10);

    const int user_count = 4;
    m_users = new components::UserView*[user_count];
    for (int i {}; i < user_count; ++i) {
        m_users[i] = new components::UserView(this);
        layout->addWidget(m_users[i], 25);
    }

    this->setLayout(layout);
}

} // namespace views
} // namespace ui
