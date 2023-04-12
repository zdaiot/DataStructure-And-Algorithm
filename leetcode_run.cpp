//
// Created by zdaiot on 2022/10/18.
//

#include "leetcode_run.h"
using namespace std;

class Solution {
private:
    double myPowPos(double x, int n) {
        if(n == 0)
            return 1;
        double res = x * myPowPos(x, n-1);
        return res;
    }
public:
    double myPow(double x, int n) {
        if(x == 0)
            return 0;
        if(n > 0)
            return myPowPos(x, n);
        else
            return 1/myPowPos(x, -n);
    }
};

void leetcode_run() {
    // ListNode* head = createLinkedList("[1,2,3,4,5]");
    // TreeNode* root = createTree("[1,2,3,null,null,4,5]");

    Solution* solu = new Solution();

    std::vector<int> preorder = {7,8,9,1,2,3,4,5,6};
    std::vector<int> inorder = {4,9,8,3,15,20,7};

    vector<vector<char>> board = {{'a', 'b'},{'c', 'd'}};
    string word = "hello";

    auto res = solu->myPow(0.00001, 2147483647);
    std::cout << res << endl;
}