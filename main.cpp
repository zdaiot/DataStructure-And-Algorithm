#include <iostream>
#include "bubble_sort/bubble_sort.h"

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, n);
	std::cout << "Sorted array:";
	printArray(arr, n);
    return 0;
}