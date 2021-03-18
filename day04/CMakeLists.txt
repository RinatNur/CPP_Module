cmake_minimum_required(VERSION 3.17)
project(day04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

include_directories(ex00)

add_executable(day03
        ex00/Peon.cpp
        ex00/Sorcerer.cpp
        ex00/Victim.cpp
        ex00/main.cpp
        )