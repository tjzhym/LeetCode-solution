// Problem :    https://leetcode.com/problems/reordered-power-of-2/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-11

#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string unordedString = to_string(n);
        int twoExp = 1;
        sort(unordedString.begin(), unordedString.end());

        for (int exp = 0; exp < 30; exp++) {
            string twoExpString = to_string(twoExp);
            sort(twoExpString.begin(), twoExpString.end());
            if (unordedString == twoExpString) {
                return true;
            }
            twoExp <<= 1;
        }
        return false;
    }
};

