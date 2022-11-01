// Problem :    https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-11-1


#include <string>
#include <vector>


class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        auto word1_it = word1.begin();
        auto word2_it = word2.begin();
        auto c1_it = (*word1_it).begin();
        auto c2_it = (*word2_it).begin();
        while (word1_it != word1.end() || word2_it != word2.end()) {
            if (*c1_it != *c2_it) {
                return false;
            }
        	++c1_it;
            if (c1_it == (*word1_it).end()) {
                ++word1_it;
                if (word1_it != word1.end()) {
                    c1_it = (*word1_it).begin();
                }
            }
            ++c2_it;
            if (c2_it == (*word2_it).end()) {
                ++word2_it;
                if (word2_it != word2.end()) {
                    c2_it = (*word2_it).begin();
                }
            }
        }
        return word1_it == word1.end() && word2_it == word2.end();
    }
};