// CPP program for implementation of bubble sort
#include <iostream>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int arr[], int n)
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

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
}
