// Problem :    https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-6


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    bool digitCount(string num) {
        vector<int> numberCount(10, 0);
        for (const auto& c : num) {
            ++numberCount[c - '0'];
        }
        for (int index = 0; index < num.size(); ++index) {
            if (numberCount[index] != (num[index] - '0')) {
                return false;
            }
        }
        return true;
    }
};

// Traverse