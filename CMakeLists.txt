cmake_minimum_required(VERSION 3.10)
project(cust CXX)
add_library(cust SHARED src/colortext.cpp src/file.cpp src/system.cpp)
