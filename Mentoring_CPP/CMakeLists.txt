cmake_minimum_required(VERSION 3.20)

project(MentoringCPP LANGUAGES CXX)

add_subdirectory(args_operations)

add_executable(my_first_exe main.cpp)

target_link_libraries(my_first_exe args_operations)
