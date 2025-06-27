cmake_minimum_required(VERSION 3.31)
include(FetchContent)

project(raylib_game)

set(CMAKE_CXX_STANDARD 20)

FetchContent_Declare(
        box2d
        GIT_REPOSITORY https://github.com/erincatto/box2d.git
        GIT_TAG main
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(box2d)

FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG master
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(raylib)

add_executable(raylib_game main.cpp)
target_link_libraries(raylib_game PRIVATE box2d raylib)