// Problem :    https://leetcode.com/problems/sign-of-the-product-of-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-27


#include <vector>


class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int sign = 1;
        for (const auto num : nums) {
            if (num == 0) {
                return 0;
            }
            else if (num < 0) {
                sign = -sign;
            }
        }
        return sign;
    }
};