add_library(core STATIC
    core/core.cpp
)

target_include_directories(core INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(test)