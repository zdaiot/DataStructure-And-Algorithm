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
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i; j < n-1; ++j)
        {
            if (arr[j] > arr[j+1])
            {
               swap(&arr[j], &arr[j+1]);
            }
        }
    }

}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << "%d "<< arr[i];
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, n);
	std::cout << "Sorted array:";
	printArray(arr, n);
    return 0;
}
