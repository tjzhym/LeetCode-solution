// Problem :    https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-12


#include <algorithm>
#include <vector>


class Solution {
public:
    int specialArray(std::vector<int>& nums) {
        sort(nums.begin(), nums.end(), std::greater<int>());
        for (int index = 1; index <= nums.size(); ++index) {
            if (nums[index - 1] >= index && (index == nums.size() || nums[index] < index)) {
                return index;
            }
        }
        return -1;
    }
};