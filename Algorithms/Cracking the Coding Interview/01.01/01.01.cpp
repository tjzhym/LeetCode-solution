// Problem :    https://leetcode-cn.com/problems/is-unique-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-17


#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool isUnique(string astr) {
        sort(astr.begin(), astr.end());
        for (int index = 1; index < astr.size(); ++index) {
            if (astr[index] == astr[index - 1]) {
                return false;
            }
        }
        return true;
    }
};

// Sorting