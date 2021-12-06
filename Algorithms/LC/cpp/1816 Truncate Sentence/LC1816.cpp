// Problem :    https://leetcode.com/problems/three-consecutive-odds/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-11


#include <vector>
using namespace std;


class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaceCount = 0, endIndex = 0;
        for (int sIndex = 1; sIndex <= s.size(); ++sIndex) {
            if (sIndex == s.size() || s[sIndex] == ' ') {
                ++spaceCount;
                if (spaceCount == k) {
                    endIndex = sIndex;
                    break;
                }
            }
        }
        return s.substr(0, endIndex);
    }
};

// Traverse