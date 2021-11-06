// Problem :    https://leetcode.com/problems/missing-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int number = 0; number < nums.size(); ++number) {
            if (number != nums[number]) {
                return number;
            }
        }
        return nums.size();
    }
};

// Sorting