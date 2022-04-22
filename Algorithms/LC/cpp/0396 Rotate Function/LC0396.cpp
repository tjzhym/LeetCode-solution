// Problem :    https://leetcode.com/problems/rotate-function/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-23


#include <vector>
using namespace std;


class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int numsSum = 0, currentSum = 0, currentMaxSum = 0;
        for (int index = 0; index < nums.size(); ++index) {
            numsSum += nums[index];
            currentSum += index * nums[index];
        }
        currentMaxSum = currentSum;

        for (int index = 0; index < nums.size() - 1; ++index) {
            currentSum += numsSum - nums.size() * nums[nums.size() - 1 - index];
            currentMaxSum = max(currentSum, currentMaxSum);
        }

        return currentMaxSum;
    }
};

// Traverse