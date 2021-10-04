// Problem :    https://leetcode.com/problems/maximum-subarray/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-3


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempSum = nums[0], maxSum = nums[0];
        for (int numsIndex = 1; numsIndex < nums.size(); ++numsIndex) {
            tempSum = max(tempSum + nums[numsIndex], nums[numsIndex]);
            maxSum = max(tempSum, maxSum);
        }
        return maxSum;
    }
};

// Kadane Algorithms

