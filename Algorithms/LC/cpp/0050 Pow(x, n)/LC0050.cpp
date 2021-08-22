// Problem :    https://leetcode.com/problems/powx-n/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-22

#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int target = nums.size() - 1;
        int currentReach = 0;
        int maxReach = 0;
        int step = 0;

        if (nums.size() < 2) {
            return 0;
        }

        for (int index = 0; index < target; index++) {
            maxReach = max(maxReach, index + nums[index]);
            if (index == currentReach) {
                step++;
                currentReach = maxReach;
            }
        }
        return step;
    }
};

