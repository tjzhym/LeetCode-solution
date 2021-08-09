// Problem :    https://leetcode.com/problems/jump-game-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-9

#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int target = nums.size() - 1;
        int currentEnd = 0;
        int maxReach = 0;
        int step = 0;

        if (nums.size() <= 1) {
            return 0;
        }

        for (int i = 0; i < target; i++) {
            maxReach = max(maxReach, nums[i] + i);
            if (i == currentEnd) {
                step++;
                currentEnd = maxReach;
            }
        };
        return step;
    }
};

