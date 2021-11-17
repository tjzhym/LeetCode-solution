// Problem :    https://leetcode.com/problems/first-unique-character-in-a-string/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-16


#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;
        for (auto c : s) {
            ++charCount[c];
        }
        for (size_t index = 0; index < s.size(); ++index) {
            if (charCount[s[index]] == 1) {
                return index;
            }
        }
        return -1;
    }
};

// Traverse