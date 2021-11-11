// Problem :    https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-11


#include <vector>
using namespace std;


class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startValue = 1, sum = 0;
        for (int number : nums) {
            sum += number;
            startValue = max(startValue, 1 - sum);
        }
        return startValue;
    }
};

// Traverse