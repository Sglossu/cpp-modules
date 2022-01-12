cmake_minimum_required(VERSION 3.20)
project(c01)

set(CMAKE_CXX_STANDARD 98)

add_executable(c01 main.cpp Zombie.cpp Zombie.hpp randomChump.cpp newZombie.cpp)
