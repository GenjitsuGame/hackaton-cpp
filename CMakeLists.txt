cmake_minimum_required(VERSION 3.6)
project(hackaton_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        application.cpp
        application.h
        hackaton.cpp
        hackaton.h
        main.cpp
        step.cpp
        step.h
        team.cpp
        team.h
        user.cpp
        user.h)

add_executable(hackaton_cpp ${SOURCE_FILES})