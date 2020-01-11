// CPP program for implementation of quick sort

#include "quick_sort.h"

int partition(std::vector<int> &arr, int p, int r)
// partition函数内部只能更改arr p到r元素的顺序，其余元素不能动
{
    // 最后一个元素作为pivot
    int pivot = arr[r];
    // 注意count要从p开始，否则会更改除了p到r元素
    int count = p;
    for (int i = p; i < r; ++i) {
        if(arr[i] <= pivot)
            swap(&arr[count++], &arr[i]);
    }
    swap(&arr[count], &arr[r]);
    return count;
}

void quick_sort_c(std::vector<int> &arr, int p, int r)
// p和r均为数组的下标，从0开始
{
    if(p >= r)
        return;
    int q = partition(arr, p, r);
    // 注意第一个函数r参数值等于q-1，而不是q
    quick_sort_c(arr, p, q-1);
    quick_sort_c(arr, q+1, r);
}

void quick_sort(std::vector<int> &arr)
{
    int n = arr.size();
    quick_sort_c(arr, 0, n-1);
}
