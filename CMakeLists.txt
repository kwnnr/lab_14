cmake_minimum_required(VERSION 3.26)
project(lab_14 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_14 libs/data_structures/vector/main.c
        libs/data_structures/vector/vector.c
        libs/data_structures/vector/vector.h)
