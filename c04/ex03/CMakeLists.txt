cmake_minimum_required(VERSION 3.20)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp AMateria.hpp Ice.cpp Ice.hpp Cure.cpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Character.cpp Character.hpp MateriaSource.cpp MateriaSource.hpp)
