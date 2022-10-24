// Problem :    https://leetcode.com/problems/merge-strings-alternately/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-24


#include <string>


class Solution {
public:
	std::string mergeAlternately(std::string word1, std::string word2) {
        int index1 = 0;
        int index2 = 0;
        int m = word1.size();
        int n = word2.size();
        std::string merged_word;

        while (index1 < m || index2 < n) {
            if (index1 < m) {
                merged_word += word1[index1];
                ++index1;
            }
            if (index2 < n) {
                merged_word += word2[index2];
                ++index2;
            }
        }
        return merged_word;
    }
};