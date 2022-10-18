//
// Created by zdaiot on 2022/10/18.
//

#include "leetcode_run.h"

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        std::vector<int> res;
        for(int i=0; i<=nums.size(); i++) {
            int ano = target - nums[i];
            if(m.count(ano)>0) {
                res.push_back(m[target-nums[i]]);
                res.push_back(i);
                // return res;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};

void leetcode_run() {
    std::vector<int> nums = { 2, 7, 11, 15};
    int target = 9;
    Solution* solu = new Solution();
    std::vector<int> res = solu->twoSum(nums, target);
    for (auto i : res)
        std::cout << i << ' ';
}