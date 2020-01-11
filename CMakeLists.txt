cmake_minimum_required(VERSION 3.15)
project(DataStructure_And_Algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructure_And_Algorithm main.cpp sort/bubble_sort.cpp sort/bubble_sort.h main.h utils/utils.cpp utils/utils.h sort/selection_sort.cpp sort/selection_sort.h sort/insertion_sort.cpp sort/insertion_sort.h)