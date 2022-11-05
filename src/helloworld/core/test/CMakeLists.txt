find_package(Catch2 3 REQUIRED)

add_executable(core-tests test.cpp)
target_link_libraries(core-tests PRIVATE core Catch2::Catch2WithMain)