set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app
    # mainwindow.ui
    # mainwindow.cpp
    main.h
    debug_util.h
    main.cpp
    debug_util.cpp
)

target_link_libraries(app PRIVATE core app_componentsplugin Qt::Gui Qt::Quick)

qt_add_qml_module(app
    URI myapp
    VERSION 1.0
    QML_FILES
        qml/main.qml
        qml/FramedImage.qml
    RESOURCES
        img/cat.png
)

set_target_properties(app PROPERTIES
    # Enable this to get rid of the console window
    # https://stackoverflow.com/questions/54413292/building-non-console-windows-app-with-qt-and-cmake
    # WIN32_EXECUTABLE ON
    
    MACOSX_BUNDLE ON
)