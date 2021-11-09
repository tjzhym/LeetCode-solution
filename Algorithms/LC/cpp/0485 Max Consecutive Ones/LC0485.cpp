// Problem :    https://leetcode.com/problems/max-consecutive-ones/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-9


#include <vector>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;
        for (int index = 0; index < nums.size(); ++index) {
            if (nums[index]) {
                ++count;
            } 
            if (!nums[index] || index == nums.size() - 1) {
                maxCount = max(count, maxCount);
                count = 0;
            }
        }
        return maxCount;
    }
};

// Traverse