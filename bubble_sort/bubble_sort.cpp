// CPP program for implementation of bubble sort
#include <iostream>
#include "bubble_sort.h"

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int arr[], int n)
// 借助C语言的数组实现
{
    if (n <= 1) return;

    for (int i = 0; i < n; ++i)
    {
        bool flag = false;
        for (int j = 0; j < n-i-1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
               swap(&arr[j], &arr[j+1]);
               flag = true;
            }
        }

        if (!flag) break;
    }
}

void bubble_sort_vector(std::vector<int> &arr)
// 借助C++中的Vector实现冒泡算法
{
    int n = arr.size();

    if (n <= 1) return;

    for (int i = 0; i < n; ++i)
    {
        bool flag = false;
        for (int j = 0; j < n-i-1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
               swap(&arr[j], &arr[j+1]);
               flag = true;
            }
        }

        if (!flag) break;
    }
}
