// Problem :    https://leetcode.com/problems/binary-search/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-6


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int smallIndex = 0, largeIndex = nums.size();
        int midIndex = 0;
        while (smallIndex <= largeIndex) {
            midIndex = smallIndex + (largeIndex - smallIndex) / 2;
            if (nums[midIndex] == target) {
                return midIndex;
            }
            else if (nums[midIndex] < target) {
                smallIndex = midIndex + 1;
            }
            else if (nums[midIndex] > target) {
                largeIndex = midIndex - 1;
            }
        }
        return -1;
    }
};

