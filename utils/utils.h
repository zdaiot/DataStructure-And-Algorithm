#ifndef DATASTRUCTURE_AND_ALGORITHM_UTILS_H
#define DATASTRUCTURE_AND_ALGORITHM_UTILS_H

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void trimLeftTrailingSpaces(string &input);
void trimRightTrailingSpaces(string &input);
void printArray(int arr[], int n);
void printVector(std::vector<int> &arr);
void printVectorVector(std::vector<std::vector<int>> &arr);
void swap(int *a, int *b);

#endif //DATASTRUCTURE_AND_ALGORITHM_UTILS_H
