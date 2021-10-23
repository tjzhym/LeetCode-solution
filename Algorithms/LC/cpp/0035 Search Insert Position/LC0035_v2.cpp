// Problem :    https://leetcode.com/problems/search-insert-position/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-23


#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int leftIndex = 0, rightIndex = nums.size() - 1, midIndex = 0;
        while (leftIndex <= rightIndex) {
            midIndex = ((rightIndex - leftIndex) >> 1) + leftIndex;
            if (target <= nums[midIndex]) {
                rightIndex = midIndex - 1;
            }
            else {
                leftIndex = midIndex + 1;
            }
        }
        return leftIndex;
    }
};

// Binary Search
