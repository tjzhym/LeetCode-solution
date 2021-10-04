// Problem :    https://leetcode.com/problems/contains-duplicate/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-3

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int numsIndex = 1; numsIndex < nums.size(); ++numsIndex) {
            if (nums[numsIndex] == nums[numsIndex - 1]) {
                return true;
            }
        }
        return false;
    }
};

// Sort

