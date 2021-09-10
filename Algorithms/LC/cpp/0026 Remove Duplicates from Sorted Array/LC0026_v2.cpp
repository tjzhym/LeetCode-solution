// Problem :    https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-10


#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int newNumIndex = 1;
        for (int numIndex = 1; numIndex < nums.size(); ++numIndex) {
            if (nums[numIndex] != nums[numIndex - 1]) {
                nums[newNumIndex] = nums[numIndex];
                ++newNumIndex;
            }
        }
        nums.erase(nums.begin() + newNumIndex, nums.end());
        return nums.size();
    }
};

// double pointer