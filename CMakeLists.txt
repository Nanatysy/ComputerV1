cmake_minimum_required(VERSION 3.22)
project(ComputerV1)

set(CMAKE_CXX_STANDARD 14)

source_group(APP_H equation.h)
source_group(APP_CPP equation.cpp
                    main.cpp)

add_executable(ComputerV1
        main.cpp
        equation.h
        equation.cpp)
