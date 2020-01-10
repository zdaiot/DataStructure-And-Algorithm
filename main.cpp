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
	std::vector<int> arr_vector{64, 25, 12, 22, 11};
	bubble_sort_vector(arr_vector);
	std::cout << "Sorted array use bubble vector:";
	printArray(arr, arr_vector.size());
    return 0;
}