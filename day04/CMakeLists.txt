cmake_minimum_required(VERSION 3.17)
project(day04)

set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")

include_directories(ex00, ex01)

add_executable(day03
#        ex00/Peon.cpp
#        ex00/Sorcerer.cpp
#        ex00/Victim.cpp
#        ex00/main.cpp
#        ex01/AWeapon.cpp
#        ex01/Character.cpp
#        ex01/Enemy.cpp
#        ex01/SuperMutant.cpp
#        ex01/RadScorpion.cpp
#        ex01/PowerFist.cpp
#        ex01/PlasmaRifle.cpp
#        ex01/main.cpp
#        ex02/AssaultTerminator.cpp
#        ex02/Squad.cpp
#        ex02/TacticalMarine.cpp
#        ex02/ISquad.hpp
#        ex02/ISpaceMarine.hpp
#        ex02/main.cpp
        ex03/AMateria.cpp
        ex03/Character.cpp
        ex03/Cure.cpp
        ex03/Ice.cpp
        ex03/MateriaSource.cpp
        ex03/ICharacter.hpp
        ex03/IMateriaSource.hpp
        ex03/main.cpp
        )