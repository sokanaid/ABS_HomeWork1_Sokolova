cmake_minimum_required(VERSION 3.20)
project(HomeWork1_Sokolova)

set(CMAKE_CXX_STANDARD 20)

add_executable(HomeWork1_Sokolova main.cpp transport.h plane.h train.h ship.h train.cpp plane.cpp ship.cpp rnd.h container.h container.cpp transport.cpp)
