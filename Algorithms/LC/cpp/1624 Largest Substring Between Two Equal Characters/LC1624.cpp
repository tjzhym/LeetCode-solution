// Problem :    https://leetcode.com/problems/largest-substring-between-two-equal-characters/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-17


#include <string>
#include <vector>


class Solution {
public:
    int maxLengthBetweenEqualCharacters(std::string s) {
        int max_length = -1;
        std::vector<int> first_indeex(26, -1);
        for (int index = 0; index < s.size(); ++index) {
            char c = s[index];
            if (first_indeex[c - 'a'] < 0) {
                first_indeex[c - 'a'] = index;
            }
            else {
                max_length = std::max(max_length, index - first_indeex[c - 'a'] - 1);
            }
        }
        return max_length;
    }
};