cmake_minimum_required(VERSION 3.16)

project(school_management_system VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find required Qt modules
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Xml)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Xml)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(school_management_system
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        register_box.h register_box.cpp register_box.ui
        dash_board_box.h dash_board_box.cpp dash_board_box.ui
        add_stud_box.h add_stud_box.cpp add_stud_box.ui
        search_stu_box.h search_stu_box.cpp search_stu_box.ui
        update_stu_box.h update_stu_box.cpp update_stu_box.ui
        update_f_names_box.h update_f_names_box.cpp update_f_names_box.ui
        update_l_name_box.h update_l_name_box.cpp update_l_name_box.ui
        update_qual_box.h update_qual_box.cpp update_qual_box.ui
        remove_stu_box.h remove_stu_box.cpp remove_stu_box.ui
        display_studs_box.h display_studs_box.cpp display_studs_box.ui
    )
else()
    if(ANDROID)
        add_library(school_management_system SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(school_management_system
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Link to both Widgets and Xml
target_link_libraries(school_management_system PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Xml
)

# macOS/iOS bundle info
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.school_management_system)
endif()

set_target_properties(school_management_system PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install
include(GNUInstallDirs)
install(TARGETS school_management_system
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(school_management_system)
endif()
