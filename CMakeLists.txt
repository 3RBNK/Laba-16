cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        data_structures/matrix/matrix.h
        data_structures/matrix/matrix.c
        algorithms/algorithms.c
        algorithms/algorithms.h)
