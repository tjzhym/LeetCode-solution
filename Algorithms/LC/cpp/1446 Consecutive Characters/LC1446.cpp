// Problem :    https://leetcode.com/problems/consecutive-characters/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-30


#include <string>
using namespace std;


class Solution {
public:
    int maxPower(string s) {
        int currentCount = 1, maxCount = 1;
        for (size_t index = 1; index < s.size(); ++index) {
            if (s[index] == s[index - 1]) {
                ++currentCount;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 1;
            }
        }
        return maxCount;
    }
};

// Traverse