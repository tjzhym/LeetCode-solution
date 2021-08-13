// Problem :    https://leetcode.com/problems/longest-increasing-subsequence/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-13

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        vector<int> dp(nums.size(), 0);
        for (int index = 0; index < nums.size(); index++) {
            dp[index] = 1;
            for (int preIndex = 0; preIndex < index; preIndex++) {
                if (nums[index] > nums[preIndex]) {
                    dp[index] = max(dp[index], dp[preIndex] + 1);
                }
            }
        }

        return *max_element(dp.begin(), dp.end());;

    }
};

