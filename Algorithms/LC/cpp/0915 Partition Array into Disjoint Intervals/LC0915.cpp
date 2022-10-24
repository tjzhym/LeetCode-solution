// Problem :    https://leetcode.com/problems/partition-array-into-disjoint-intervals/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-24


#include <vector>


class Solution {
public:
    int partitionDisjoint(std::vector<int>& nums) {
        int left_index = 0;
        int left_max = nums[0];
        int cur_max = nums[0];
        int n = nums.size();
        for (int index = 1; index < n; ++index) {
            cur_max = std::max(cur_max, nums[index]);
            if (left_max > nums[index]) {
                left_max = cur_max;
                left_index = index;
            }
        }
        return left_index + 1;
    }
};