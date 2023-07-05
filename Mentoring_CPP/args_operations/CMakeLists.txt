cmake_minimum_required(VERSION 3.20)

#project(MentoringCPP LANGUAGES CXX)

add_library(args_operations args_operations.cpp)

target_include_directories(args_operations PUBLIC .)

#add_executable(my_first_exe main.cpp)

#target_link_libraries(my_first_exe args_operations)
