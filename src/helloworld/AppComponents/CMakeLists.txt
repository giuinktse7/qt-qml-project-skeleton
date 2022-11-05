cmake_minimum_required(VERSION 3.16)

set(CMAKE_PREFIX_PATH "C:/Qt/6.3.1/msvc2019_64/lib/cmake")

set(CMAKE_AUTOMOC ON)


find_package(Qt6 REQUIRED COMPONENTS Core Qml Quick)

qt_add_library(app_components STATIC)

qt_add_qml_module(app_components
    URI AppComponents
    VERSION 1.0
    SOURCES
        my_type.h my_type.cpp
    QML_FILES
        RedSquare.qml
) 