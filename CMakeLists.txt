cmake_minimum_required(VERSION 3.3)
project(cmocking)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
enable_testing()
set(SOURCE_FILES main.cpp UserInteraction.cpp UserInteraction.h)
add_executable(cmocking ${SOURCE_FILES})
add_executable(testing test.cpp UserInteraction.cpp UserInteraction.h )