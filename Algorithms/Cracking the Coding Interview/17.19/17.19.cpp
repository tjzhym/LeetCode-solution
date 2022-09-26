// Problem :    https://leetcode.cn/problems/missing-two-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-26


#include <vector>


class Solution {
public:
	std::vector<int> missingTwo(std::vector<int>& nums) {
        int xor_sum = 0;
        for (const int num : nums) {
            xor_sum ^= num;
        }
        int n = nums.size() + 2;
        for (int num = 1; num <= n; ++num) {
            xor_sum ^= num;
        }

        int lsb = xor_sum & -xor_sum;
        int mask1 = 0;
        int mask2 = 0;
        for (int num = 1; num <= n; ++num) {
            if (num & lsb) {
                mask1 ^= num;
            }
            else {
                mask2 ^= num;
            }
        }
        for (const int num : nums) {
            if (num & lsb) {
                mask1 ^= num;
            }
            else {
                mask2 ^= num;
            }
        }
        return { mask1, mask2 };
    }
};