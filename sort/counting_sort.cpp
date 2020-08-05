//
// Created by zdkit on 2020/8/5.
//

#include "counting_sort.h"

void counting_sort(vector<int>& arr) {
    int length = arr.size();
    if(length <= 0)
        return;

    // find max value
    int maxV = arr[0];
    for(int i=1; i<length; i++) {
        if(arr[i] > maxV)
            maxV = arr[i];
    }

    // 统计每个元素出现的次数
    vector<int> count(maxV+1);
    for(int i=0; i<length; i++) {
        count[arr[i]]++;
    }

    // 依次累加
    for(int i=1; i<count.size(); i++) {
        count[i] += count[i-1];
    }

    // 开始排序
    vector<int> result(arr.size());
    for(int i=0; i<arr.size(); i++) {
        int index = count[arr[i]]-1;
        result[index] = arr[i];
        count[arr[i]]--;
    }

    // 拷贝回去原数组
    for(int i=0; i<arr.size(); i++)
        arr[i] = result[i];
}