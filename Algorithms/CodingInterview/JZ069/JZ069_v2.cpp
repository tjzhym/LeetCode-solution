// Problem :    https://leetcode-cn.com/problems/B1IidL/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lowerBound = 1, upperBound = arr.size() - 2;
        int peakIndex = 0;
        while (lowerBound <= upperBound) {
            peakIndex = lowerBound + (upperBound - lowerBound) / 2;
            if (arr[peakIndex] > arr[peakIndex - 1] && arr[peakIndex] > arr[peakIndex + 1]) {
                return peakIndex;
            }
            else if (arr[peakIndex] > arr[peakIndex - 1]) {
                lowerBound = peakIndex + 1;
            }
            else {
                upperBound = peakIndex - 1;
            }
        }
        return -1;
    }
};

// Binary Search