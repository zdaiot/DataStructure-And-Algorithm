#include <iostream>
#include "main.h"


int main()
{
    // 测试bubble_sort函数，使用C语言数组
    int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, n);
	std::cout << "Sorted array use bubble:";
	printArray(arr, n);

	// 测试bubble_sort_vector函数，使用C++语言Vector
	std::vector<int> arr_bubble_vector{64, 25, 12, 22, 11};
	bubble_sort_vector(arr_bubble_vector);
	std::cout << "Sorted array use bubble vector:";
	printVector(arr_bubble_vector);

	// 测试insertion_sort_mine函数
	std::vector<int> arr_insertion_mine{64, 25, 12, 22, 11};
	insertion_sort_mine(arr_insertion_mine);
	std::cout << "Sorted array use insertion mine:";
	printVector(arr_insertion_mine);

	// 测试insertion_sort函数
	std::vector<int> arr_insertion{64, 25, 12, 22, 11};
	insertion_sort(arr_insertion);
	std::cout << "Sorted array use insertion:";
	printVector(arr_insertion);

	// 测试selection_sort函数
	std::vector<int> arr_selection{64, 25, 12, 22, 11};
	selection_sort(arr_selection);
	std::cout << "Sorted array use selection:";
	printVector(arr_selection);

    return 0;
}