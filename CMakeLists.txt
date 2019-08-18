cmake_minimum_required(VERSION 3.14)
project(Algorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(Algorithms main.c Lesson1/Lesson1.c Lesson1/Lesson1.h main.h Utils/Utils.c Utils/Utils.h)