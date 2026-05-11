cmake_minimum_required(VERSION 3.10)

project(music_player)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_library(music_lib
    src/Song.cpp
    src/MusicLibrary.cpp
)

add_executable(music_player
    src/main.cpp
)

target_link_libraries(music_player music_lib)

add_executable(tests
    tests/test_main.cpp
)

target_link_libraries(tests music_lib)

add_test(NAME FeatureTests COMMAND tests)