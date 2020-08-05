//
// Created by zdkit on 2020/8/5.
// https://leetcode-cn.com/problems/sort-an-array/solution/shi-er-chong-pai-xu-suan-fa-bao-ni-man-yi-dai-gift/
// https://www.cnblogs.com/chengxiao/p/6104371.html
//

#include "shell_sort.h"

void shell_sort(vector<int>& arr) {
    int length = arr.size();
    int gap = length>>1; // gap表示可以分多少个子序列
    while(gap > 0) {
        for(int i=0; i<gap; i++) {
            for(int j=i+gap; j<length; j+=gap) {
                int tmp = j;
                while(tmp>i && arr[tmp] < arr[tmp-gap]) {
                    swap(arr[tmp], arr[tmp-gap]);
                    tmp -= gap;
                }
            }
        }
        gap = gap>>1;
    }
}