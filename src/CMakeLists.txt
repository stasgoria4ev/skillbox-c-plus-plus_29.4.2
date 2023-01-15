cmake_minimum_required(VERSION 3.0.0)

add_executable(StasGvProject myprogram.cpp Triangle.cpp Circle.cpp Rectangle.cpp Shape.cpp printParams.cpp)
target_include_directories(StasGvProject PUBLIC ${CMAKE_SOURCE_DIR}/include)