// Problem :    https://leetcode.com/problems/search-insert-position/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-23


#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int index = 0; index < nums.size(); ++index) {
            if (nums[index] >= target) {
                return index;
            }
        }
        return nums.size();
    }
};

// Traverse
