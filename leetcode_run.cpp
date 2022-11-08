//
// Created by zdaiot on 2022/10/18.
//

#include "leetcode_run.h"
using namespace std;

class Solution {
private:
    int minArrayCore(vector<int>& numbers, int s, int e) {
        if(e == s)
            return numbers[e];
        int mid = (s+e) / 2;
        if(numbers[mid] == numbers[e]) {
            int res = 5001;
            for(int i=s; i<=e; i++) {
                if(numbers[i] < res)
                    res = numbers[i];
            }
            return res;
        }
        else if(numbers[mid] > numbers[e])
            return minArrayCore(numbers, mid+1, e);
        else
            return minArrayCore(numbers, s, mid);
    }
public:
    int minArray(vector<int>& numbers) {
        int res = minArrayCore(numbers, 0, numbers.size()-1);
        return res;
    }
};

void leetcode_run() {
    // ListNode* head = createLinkedList("[1,2,3,4,5]");
    // TreeNode* root = createTree("[1,2,3,null,null,4,5]");

    Solution* solu = new Solution();

    std::vector<int> preorder = {7,8,9,1,2,3,4,5,6};
    std::vector<int> inorder = {4,9,8,3,15,20,7};

    auto res = solu->minArray(preorder);
    std::cout << res << endl;
}