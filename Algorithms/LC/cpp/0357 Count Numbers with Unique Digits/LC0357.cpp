// Problem :    https://leetcode.com/problems/count-numbers-with-unique-digits/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-11


class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 10;
        }

        int count = 10, combinationNumber = 9, leftNumber = 9;
        for (int bit = 2; bit < n + 1; ++bit) {
            combinationNumber *= leftNumber;
            --leftNumber;
            count += combinationNumber;
        }
        return count;
    }
};

// Permutation