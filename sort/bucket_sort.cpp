//
// Created by zdkit on 2020/8/5.
//

#include "bucket_sort.h"
#include <algorithm>

void bucket_sort(vector<int>& arr) {
    int inter = 2; // 定义桶的大小，比如说0~1,2~3
    int maxV = *(max_element(arr.begin(), arr.end()));
    int minV = *(min_element(arr.begin(), arr.end()));

    // 计算桶的个数
    int count = (maxV - minV + 1);
    int bucketSize = (count%inter==0)?(count/inter):(count/inter+1);
    vector<vector<int>> buckets(bucketSize, vector<int>());

    // 划分到不同的桶中
    for(auto & num: arr) {
        int quotient = (num-minV)/inter;
        buckets[quotient].push_back(num);
    }

    int cur = 0;
    for(auto& bucket: buckets) {
        if(bucket.size()>0) {
            sort(bucket.begin(), bucket.end());
            for(int i=0; i<bucket.size(); i++)
                arr[cur++] = bucket[i];
        }
    }
}