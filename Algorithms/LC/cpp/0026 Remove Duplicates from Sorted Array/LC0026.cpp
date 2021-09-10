// Problem :    https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-10


#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int numIndex = 1;
        while (numIndex < nums.size()) {
            if (nums[numIndex] == nums[numIndex - 1]) {
                nums.erase(nums.begin() + numIndex);
            }
            else {
                numIndex += 1;
            }
        }
        return nums.size();
    }
};

// brute force