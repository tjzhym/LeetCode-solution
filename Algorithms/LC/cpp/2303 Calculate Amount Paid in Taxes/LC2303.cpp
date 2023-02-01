// Problem :    https://leetcode.com/problems/calculate-amount-paid-in-taxes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2023-2-1


#include <vector>


class Solution {
public:
    double calculateTax(std::vector<std::vector<int>>& brackets, int income) {
        int lower = 0;
        double tax = 0.0f;
        for (const auto& bracket : brackets) {
            if (income <= bracket[0]) {
                tax += (income - lower) * bracket[1];
                break;
            } else {
                tax += (bracket[0] - lower) * bracket[1];
                lower = bracket[0];
            }
        }
        return tax / 100.0f;
    }
};