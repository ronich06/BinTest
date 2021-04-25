cmake_minimum_required(VERSION 3.19)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp ReserveManager.cpp ReserveManager.h Bus.h Bus.cpp Passanger.h Passanger.cpp BusManager.h BusManager.cpp PassangerManager.h PassangerManager.cpp)