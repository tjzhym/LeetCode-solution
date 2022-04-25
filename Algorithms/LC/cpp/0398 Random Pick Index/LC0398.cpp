// Problem :    https://leetcode.com/problems/rotate-function/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-23


#include <vector>
using namespace std;


class Solution {
    vector<int> nums;
public:
    Solution(vector<int>& nums) : nums(nums) {

    }

    int pick(int target) {
        int result = 0, count = 0;
        for (int index = 0; index < nums.size(); ++index) {
            if (nums[index] == target) {
                ++count;
                if (rand() % count == 0) {
                    result = index;
                }
            }
        }
        return result;
    }
};

// Reservoir Sampling

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */