cmake_minimum_required(VERSION 3.7)
project(BusStop)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Clock.cpp Clock.h BusStop.cpp BusStop.h Schedule.cpp Schedule.h)
add_executable(BusStop ${SOURCE_FILES} Clock.cpp Clock.h BusStop.cpp BusStop.h Schedule.cpp Schedule.h)