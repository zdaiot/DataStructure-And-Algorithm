// CPP program for implementation of merge sort
#include "merge_sort.h"

void merge(std::vector<int> &arr, int p, int q, int r)
// merge函数内部只能更改arr p到r元素的顺序，其余元素不能动
{
    std::vector<int> tmp{r-p+1};

    // i和j分别作为arr1和arr2的索引，下标不能从0开始，k作为arr的索引
    int i=p, j=q+1, k=0;
    while (i<=q && j<=r)
    {
        if(arr[i] <= arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }

    // 看那个列表为空了，将另外一个列表中所有元素依次复制到arr中
    int start = i, end = q;
    // 若第二个列表为空，则j=r+1
    if(j<=r)
        start = j, end = r;

    for (int l = start; l <= end; ++l)
        tmp[k++] = arr[l];

    // 将tmp中的元素复制到arr中的从p到r的位置
    for (int m = p; m <= r; ++m) {
        arr[m] = tmp[m-p];
    }
}

void merge_sort_c(std::vector<int> &arr, int p, int r)
// p和r均为数组的下标，从0开始
{
    if(p >= r)
        return;
    int q = (p + r)/2; // 对于整数除法会得到一个整数，小数部分自动去掉
    merge_sort_c(arr, p, q);
    merge_sort_c(arr, q+1, r);
    merge(arr, p, q, r);
}

void merge_sort(std::vector<int> &arr)
{
    int n = arr.size();
    merge_sort_c(arr, 0, n-1);
}