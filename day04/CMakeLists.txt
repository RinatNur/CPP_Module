cmake_minimum_required(VERSION 3.17)
project(day04)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

include_directories(ex00, ex01)

add_executable(day03
#        ex00/Peon.cpp
#        ex00/Sorcerer.cpp
#        ex00/Victim.cpp
#        ex00/main.cpp
        ex01/AWeapon.cpp
        ex01/Enemy.cpp
        ex01/SuperMutant.cpp
        ex01/RadScorpion.cpp
        ex01/PowerFist.cpp
        ex01/PlasmaRifle.cpp
        ex01/main.cpp
        )