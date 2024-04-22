QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/app/main.cpp \
    src/app/main_window.cpp \
    src/ui/components/logo_area/logo_area_view.cpp \
    src/ui/components/management/management_view.cpp \
    src/ui/components/nav_area/nav_area_view.cpp \
    src/ui/components/player_song/player_song_view.cpp \
    src/ui/components/section/section_one_part/section_one_part_view.cpp \
    src/ui/components/section/section_view.cpp \
    src/ui/components/song/name_count/name_count_view.cpp \
    src/ui/components/song/song_view.cpp \
    src/ui/components/songs/songs_view.cpp \
    src/ui/components/user/user_view.cpp \
    src/ui/components/user_info/friend_part/friend_part_view.cpp \
    src/ui/components/user_info/friend_part/parts/parts_view.cpp \
    src/ui/components/user_info/image_username/image_username_view.cpp \
    src/ui/components/user_info/user_info_view.cpp \
    src/ui/views/central_area/central_area_view.cpp \
    src/ui/views/footer/footer_view.cpp \
    src/ui/views/header/header_view.cpp \
    src/ui/views/left_sidebar/left_sidebar_view.cpp \
    src/ui/views/player_area/player_area_view.cpp \
    src/ui/views/right_sidebar/right_sidebar_view.cpp

HEADERS += \
    src/app/main_window.h \
    src/ui/components/logo_area/logo_area_view.h \
    src/ui/components/management/management_view.h \
    src/ui/components/nav_area/nav_area_view.h \
    src/ui/components/player_song/player_song_view.h \
    src/ui/components/section/section_one_part/section_one_part_view.h \
    src/ui/components/section/section_view.h \
    src/ui/components/song/name_count/name_count_view.h \
    src/ui/components/song/song_view.h \
    src/ui/components/songs/songs_view.h \
    src/ui/components/user/user_view.h \
    src/ui/components/user_info/friend_part/friend_part_view.h \
    src/ui/components/user_info/friend_part/parts/parts_view.h \
    src/ui/components/user_info/image_username/image_username_view.h \
    src/ui/components/user_info/user_info_view.h \
    src/ui/views/central_area/central_area_view.h \
    src/ui/views/footer/footer_view.h \
    src/ui/views/header/header_view.h \
    src/ui/views/left_sidebar/left_sidebar_view.h \
    src/ui/views/player_area/player_area_view.h \
    src/ui/views/right_sidebar/right_sidebar_view.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
