//
// Created by zdkit on 2020/7/27.
//

#ifndef DATASTRUCTURE_AND_ALGORITHM_TREE_H
#define DATASTRUCTURE_AND_ALGORITHM_TREE_H
#include <string>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

TreeNode* createTree(const string& line);
void prettyPrintTree(TreeNode* node, string prefix = "", bool isLeft = true);
#endif //TESTCPP_TREE_H
