// Problem :    https://leetcode.com/problems/squares-of-a-sorted-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-29


#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto &num : nums) {
            num *= num;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// Sorting