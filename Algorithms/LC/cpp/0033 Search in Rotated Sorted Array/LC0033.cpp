// Problem :    https://leetcode.com/problems/search-in-rotated-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftIndex = 0, rightIndex = nums.size() - 1;
        while (leftIndex <= rightIndex) {
            int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;
            if (nums[middleIndex] == target) {
                return middleIndex;
            }
            if (nums[0] <= nums[middleIndex]) {
                if (nums[leftIndex] <= target && target <= nums[middleIndex]) {
                    rightIndex = middleIndex - 1;
                }
                else {
                    leftIndex = middleIndex + 1;
                }
            }
            else {
                if (nums[middleIndex] <= target && target <= nums[rightIndex]) {
                    leftIndex = middleIndex + 1;
                }
                else {
                    rightIndex = middleIndex - 1;
                }
            }
        }
        return -1;
    }
};

// Binary Search