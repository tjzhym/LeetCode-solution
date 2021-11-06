// Problem :    https://leetcode.com/problems/missing-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = 0;
        for (auto num : nums) {
            missing ^= num;
        }
        for (int number = 0; number < nums.size() + 1; ++number) {
            missing ^= number;
        }
        return missing;
    }
};

// Bit Operation