// Problem :    https://leetcode.com/problems/letter-case-permutation/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-30


#include <string>
#include <vector>


class Solution {
public:
	std::vector<std::string> letterCasePermutation(std::string s) {
        int alpha_count = 0;
        for (const auto c : s) {
            if (std::isalpha(c)) {
                ++alpha_count;
            }
        }

        std::vector<std::string> output;
        for (int mask = 0; mask < (1 << alpha_count); ++mask) {
            int alpha_index = 0;
            std::string cur_s;
            for (const auto c : s) {
                if (std::isdigit(c)) {
                    cur_s += c;
                }
                else {
                    if ((1 << alpha_index) & mask) {
                        cur_s += std::toupper(c);
                    }
                    else {
                        cur_s += std::tolower(c);
                    }
                    ++alpha_index;
                }
            }
            output.emplace_back(cur_s);
        }
        return output;
    }
};