// CPP program for implementation of selection sort
#include "selection_sort.h"
#include "../utils/utils.h"

void selection_sort(std::vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        // min_value存储最小元素的值，position存储最小元素对应的位置
        int min_value = arr[i];
        int position = i;
        int j = i;
        for (; j < n; ++j)
        {
            if(arr[j] < min_value)
            {
                min_value = arr[j];
                position = j;
            }
        }
        swap(&arr[i], &arr[position]);
    }
}



