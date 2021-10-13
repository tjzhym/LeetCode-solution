// Problem :    https://leetcode-cn.com/problems/B1IidL/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for (int arrIndex = 1; arrIndex < arr.size() - 1; ++arrIndex) {
            if (arr[arrIndex] > arr[arrIndex + 1]) {
                return arrIndex;
            }
        }
        return -1;
    }
};

// Traverse