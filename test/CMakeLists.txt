cmake_minimum_required(VERSION 3.14)
project(example)

#ADD_SUBDIRECTORY(pybind11)
find_package(pybind11 REQUIRED)  # or add_subdirectory(pybind11)
pybind11_add_module(example example.cpp)
