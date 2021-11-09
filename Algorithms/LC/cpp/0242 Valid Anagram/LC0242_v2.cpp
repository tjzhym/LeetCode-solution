// Problem :    https://leetcode.com/problems/valid-anagram/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-9


#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> charaterCount;
        for (auto c : s) {
            ++charaterCount[c];
        }
        for (auto c : t) {
            --charaterCount[c];
            if (charaterCount[c] < 0) {
                return false;
            }
        }

        return true;
    }
};

// Hash Map