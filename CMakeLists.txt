cmake_minimum_required(VERSION 3.21)
project(Lecture23Examples)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lecture23Examples main.cpp CurvedActivity.h CurvedActivity.cpp GradedActivity.cpp GradedActivity.h  PassFailActivity.cpp PassFailActivity.h)
