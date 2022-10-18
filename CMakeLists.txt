cmake_minimum_required(VERSION 3.15)
project(DataStructure_And_Algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructure_And_Algorithm main.cpp sort/bubble_sort.cpp sort/bubble_sort.h main.h utils/utils.cpp utils/utils.h utils/linked_list.cpp utils/linked_list.h utils/tree.cpp utils/tree.h sort/selection_sort.cpp sort/selection_sort.h sort/insertion_sort.cpp sort/insertion_sort.h sort/quick_sort.cpp sort/quick_sort.h sort/merge_sort.cpp sort/merge_sort.h sort/test_sort.cpp sort/test_sort.h sort/counting_sort.cpp sort/counting_sort.h sort/bucket_sort.cpp sort/bucket_sort.h sort/shell_sort.cpp sort/shell_sort.h leetcode_run.cpp leetcode_run.h)