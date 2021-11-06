// Problem :    https://leetcode.com/problems/missing-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size() * (nums.size() + 1) / 2;
        for (auto num : nums) {
            sum -= num;
        }
        return sum;
    }
};

// Math Sum