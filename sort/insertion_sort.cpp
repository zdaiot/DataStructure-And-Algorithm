// CPP program for implementation of insertion sort
#include "insertion_sort.h"

void insertion_sort_mine(std::vector<int> &arr)
// 注意不要引入额外的空间复杂度
{   
    int n = arr.size();

    if(n <= 1) return;

    // 对于第i个（下标从0开始）元素
    for (int i = 1; i < n; ++i)
    {
        // 检索已排序区间
        for (int j = 0; j < i; ++j)
        {
            // 满足if条件了，则当前的j即为插入位置
            if(arr[i] < arr[j])
            {
                int tmp = arr[i];
                // 移动元素
                for (int k = i; k > j; --k)
                {
                    arr[k] = arr[k-1];
                }
                arr[j] = tmp;
            }
        }
    }
}


void insertion_sort(std::vector<int> &arr)
// 注意不要引入额外的空间复杂度。借助已排序区间中所有元素已经排好序了，减少移动元素的时间复杂度
{
    int n = arr.size();

    if(n <= 1) return;

    // 对于第i个（下标从0开始）元素
    for (int i = 1; i < n; ++i)
    {
        int tmp = arr[i];
        // 检索已排序区间
        int j = i-1;
        for (; j >= 0; --j)
        {
            if(arr[j] > tmp)
                arr[j+1] = arr[j]; // 移动数据
            else
                break;
        }
        arr[j+1] = tmp;
    }
}

