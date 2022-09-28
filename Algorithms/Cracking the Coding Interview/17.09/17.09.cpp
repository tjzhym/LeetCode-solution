// Problem :    https://leetcode.cn/problems/get-kth-magic-number-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-28


#include <vector>


class Solution {
public:
    int getKthMagicNumber(int k) {
	    std::vector<int> magic_numbers(k + 1);
        magic_numbers[1] = 1;
        int p3 = 1;
        int p5 = 1;
        int p7 = 1;
        int num3, num5, num7;
        for (int index = 2; index <= k; ++index) {
            num3 = magic_numbers[p3] * 3;
            num5 = magic_numbers[p5] * 5;
            num7 = magic_numbers[p7] * 7;
            int num = std::min(std::min(num3, num5), num7);
            magic_numbers[index] = num;
            if (num == num3) {
                ++p3;
            }
            if (num == num5) {
                ++p5;
            }
            if (num == num7) {
                ++p7;
            }
        }
        return magic_numbers[k];
    }
};