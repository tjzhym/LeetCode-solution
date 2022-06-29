// Problem :    https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-29


#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
	    sort(nums.begin(), nums.end());
        int difference = INT_MAX;
        for (int index = 0; index + k <= nums.size(); ++index) {
            difference = min(difference, nums[index + k - 1] - nums[index]);
        }
        return difference;
    }
};

// Traverse