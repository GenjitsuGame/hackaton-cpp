cmake_minimum_required(VERSION 3.6)
project(hackaton_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp User.cpp User.h Application.cpp Application.h Hackaton.cpp Hackaton.h)
add_executable(hackaton_cpp ${SOURCE_FILES})