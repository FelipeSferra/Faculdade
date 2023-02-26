cmake_minimum_required(VERSION 3.22)
project(CMAKE)

set(CMAKE_CXX_STANDARD 14)

add_executable(algoritmos aula_13062022.cpp aula_15062022.cpp aula_26072022.cpp aula_15082022.cpp
        prog_unesp_new.cpp prog_unesp.cpp)
add_executable(testes controleAdega.cpp)