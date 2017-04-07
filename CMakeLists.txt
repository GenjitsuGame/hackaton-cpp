cmake_minimum_required(VERSION 3.6)
project(hackaton_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp user.cpp user.h application.cpp application.h hackaton.cpp hackaton.h team.cpp team.h step.cpp step.h)
add_executable(hackaton_cpp ${SOURCE_FILES})