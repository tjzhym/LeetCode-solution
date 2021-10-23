// Problem :    https://leetcode-cn.com/problems/check-permutation-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-23


#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        unordered_map<char, int> compareMap;
        for (int index = 0; index < s1.size(); ++index) {
            ++compareMap[s1[index]];
            --compareMap[s2[index]];
        }
        for (int index = 0; index < s1.size(); ++index) {
            if (compareMap[s1[index]] || compareMap[s2[index]]) {
                return false;
            }
        }
        return true;
    }
};

// HashMap