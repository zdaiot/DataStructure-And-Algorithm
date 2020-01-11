#include <iostream>
#include "utils.h"

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

void printVector(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
