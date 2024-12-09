cmake_minimum_required(VERSION 3.28)
project(2_lab_C C)

set(CMAKE_C_STANDARD 99)

add_executable(2_lab_C project/9/main.c
        project/9/s_f_printf.h
        project/9/s_f_printf.c)
