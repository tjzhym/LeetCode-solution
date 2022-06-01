// Problem :    https://leetcode.com/problems/running-sum-of-1d-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-1


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int index = 1; index < nums.size(); ++index) {
            nums[index] += nums[index - 1];
        }
        return nums;
    }
};

// Traverse