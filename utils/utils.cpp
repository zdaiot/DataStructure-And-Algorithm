#include <iostream>
#include "utils.h"

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

void printVector(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}
