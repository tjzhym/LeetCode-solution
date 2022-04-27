// Problem :    https://leetcode.com/problems/sort-colors/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <vector>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeroIndex = 0, twoIndex = n - 1;
        for (int index = 0; index < n; ++index) {
            while (index < twoIndex && nums[index] == 2) {
                swap(nums[index], nums[twoIndex]);
                --twoIndex;
            }
            if (nums[index] == 0) {
                swap(nums[index], nums[zeroIndex]);
                ++zeroIndex;
            }
        }
    }
};

// Triple Pointer