cmake_minimum_required(VERSION 3.6)
project(K_Means_R_d)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c utils.h utils.c)
add_executable(K_Means_R_d ${SOURCE_FILES})