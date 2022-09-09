// Problem :    https://leetcode.com/problems/crawler-log-folder/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-9


#include <string>
#include <vector>


class Solution {
public:
    int minOperations(std::vector<std::string>& logs) {
        int count = 0;
        for (const std::string& log : logs) {
            if (log == "./") {
                continue;
            } else if (log == "../") {
                if (count > 0) {
                    --count;
                }
            }
            else {
                ++count;
            }
        }
        return count;
    }
};