// Problem :    https://leetcode.com/problems/convert-the-temperature/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2023-3-21


#include <vector>


class Solution {
public:
	std::vector<double> convertTemperature(double celsius) {
        return { celsius + 273.15, celsius * 1.80 + 32.00 };
    }
};