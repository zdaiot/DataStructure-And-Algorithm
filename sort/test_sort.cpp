#include "test_sort.h"

void test_sort()
{
    // 测试bubble_sort函数，使用C语言数组
    int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, n);
	std::cout << "Sorted array use bubble sort:";
	printArray(arr, n);

	// 测试bubble_sort_vector函数，使用C++语言Vector
	std::vector<int> arr_bubble_vector{64, 25, 12, 22, 11};
	bubble_sort_vector(arr_bubble_vector);
	std::cout << "Sorted array use bubble vector sort:";
	printVector(arr_bubble_vector);

	// 测试insertion_sort_mine函数
	std::vector<int> arr_insertion_mine{64, 25, 12, 22, 11};
	insertion_sort_mine(arr_insertion_mine);
	std::cout << "Sorted array use insertion mine sort:";
	printVector(arr_insertion_mine);

	// 测试insertion_sort函数
	std::vector<int> arr_insertion{64, 25, 12, 22, 11};
	insertion_sort(arr_insertion);
	std::cout << "Sorted array use insertion sort:";
	printVector(arr_insertion);

	// 测试selection_sort函数
	std::vector<int> arr_selection{64, 25, 12, 22, 11};
	selection_sort(arr_selection);
	std::cout << "Sorted array use selection sort:";
	printVector(arr_selection);

	// 测试merge_sort函数
	std::vector<int> arr_merge{64, 25, 12, 22, 11};
	merge_sort(arr_merge);
	std::cout << "Sorted array use merge sort:";
	printVector(arr_merge);

	// 测试quick_sort函数
	std::vector<int> arr_quick{64, 25, 12, 22, 11};
	quick_sort(arr_quick);
	std::cout << "Sorted array use quick sort:";
	printVector(arr_quick);

    // 测试counting_sort函数
	std::vector<int> arr_counting{64, 25, 12, 22, 11};
	counting_sort(arr_counting);
	std::cout << "Sorted array use counting sort:";
	printVector(arr_counting);

    // 测试shell_sort函数
	std::vector<int> arr_shell{64, 25, 12, 22, 11};
	shell_sort(arr_shell);
	std::cout << "Sorted array use shell sort:";
	printVector(arr_shell);

    // 测试bucket_sort函数
	std::vector<int> arr_bucket{64, 25, 12, 22, 11};
	bucket_sort(arr_bucket);
	std::cout << "Sorted array use bucket sort:";
	printVector(arr_bucket);
}