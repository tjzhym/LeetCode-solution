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
        int zeroIndex = 0, oneIndex = 0;
        for (int index = 0; index < n; ++index) {
            if (nums[index] == 0) {
                swap(nums[index], nums[zeroIndex]);
                if (zeroIndex != oneIndex) {
                    swap(nums[index], nums[oneIndex]);
                }
                ++zeroIndex;
                ++oneIndex;
            }
            else if (nums[index] == 1) {
                swap(nums[index], nums[oneIndex]);
                ++oneIndex;
            }
        }
    }
};

// Triple Pointer