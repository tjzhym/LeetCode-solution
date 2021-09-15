// Problem :    https://leetcode.com/problems/remove-element/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-15


#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newNumsIndex = 0;
        for (int numsJudgeIndex = 0; numsJudgeIndex < nums.size(); ++numsJudgeIndex) {
            if (nums[numsJudgeIndex] != val) {
                nums[newNumsIndex] = nums[numsJudgeIndex];
                ++newNumsIndex;
            }
        }
        nums.erase(nums.begin() + newNumsIndex, nums.end());
        return nums.size();
    }
};

// Double Pointer