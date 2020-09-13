//
// Created by zdkit on 2020/7/27.
//

#ifndef DATASTRUCTURE_AND_ALGORITHM_LINKED_LIST_H
#define DATASTRUCTURE_AND_ALGORITHM_LINKED_LIST_H

#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createLinkedList(const string& line);

#endif //TESTCPP_LINKED_LIST_H
