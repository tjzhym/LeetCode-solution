// Problem :    https://leetcode-cn.com/problems/is-unique-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-20


#include <string>
#include <map>
using namespace std;


class Solution {
public:
    bool isUnique(string astr) {
        map<char, int> hashmap;
        for (auto c : astr) {
            ++hashmap[c];
            if (hashmap[c] > 1) {
                return false;
            }
        }
        return true;
    }
};

// HashMap