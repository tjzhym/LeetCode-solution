// Problem :    https://leetcode.com/problems/smallest-range-i/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-30


#include <vector>
using namespace std;


class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minimum = INT_MAX, maximum = INT_MIN;
        for (int& num : nums) {
            minimum = min(minimum, num);
            maximum = max(maximum, num);
        }
        return max(maximum - minimum - 2 * k, 0);
    }
};

// Traverse