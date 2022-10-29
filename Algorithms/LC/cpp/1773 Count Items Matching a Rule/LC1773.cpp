// Problem :    https://leetcode.com/problems/count-items-matching-a-rule/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-29


#include <string>
#include <unordered_map>
#include <vector>


class Solution {
public:
    int countMatches(std::vector<std::vector<std::string>>& items, std::string ruleKey, std::string ruleValue) {
        std::unordered_map<std::string, int> indices = { {"type", 0}, {"color", 1}, {"name", 2} };
        int count = 0;
        for (const auto& item : items) {
            int index = indices[ruleKey];
            if (item[index] == ruleValue) {
                ++count;
            }
        }
        return count;
    }
};
