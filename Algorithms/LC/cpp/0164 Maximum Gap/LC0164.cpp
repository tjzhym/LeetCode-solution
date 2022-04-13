// Problem :    https://leetcode.com/problems/maximum-gap/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-14


#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }
        int maxGap = INT_MIN;
        ranges::sort(nums.begin(), nums.end());
        for (int index = 1; index < nums.size(); ++index) {
            maxGap = max(maxGap, nums[index] - nums[index - 1]);
        }
        return maxGap;
    }
};

// Sort