cmake_minimum_required(VERSION 3.17)
project(Timer_LabProgr)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(Timer_LabProgr main.cpp Time.cpp Time.h Data.cpp Data.h Observer.h Counter.cpp Counter.h)