// Problem :    https://leetcode.com/problems/single-element-in-a-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-20


#include <vector>
using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for (size_t index = 0; index < nums.size() - 1; index += 2) {
            if (nums[index] != nums[index + 1]) {
                return nums[index];
            }
        }
        return nums[nums.size() - 1];
    }
};

// Traverse