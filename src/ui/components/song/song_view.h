#ifndef SONGVIEW_H
#define SONGVIEW_H

#include "src/ui/components/song/name_count/name_count_view.h"

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>

namespace ui
{
namespace components
{
class Image : public QWidget
{
public:
    explicit Image(QWidget* parent);
};

class SongView : public QWidget
{
public:
    explicit SongView(QWidget* parent);
private:
    Image* m_image;
    NameCountView* m_name_count_view;
};
} // namespace components
} // namespace ui

#endif // SONGVIEW_H
