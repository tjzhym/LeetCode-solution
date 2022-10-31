// Problem :    https://leetcode.com/problems/magical-string/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-31


#include <string>


class Solution {
public:
    int magicalString(int n) {
        if (n < 4) {
            return 1;
        }
        std::string s = "122";
        s.reserve(10001);
        int one_count = 1;
        int count_index = 2;
        int num_index = 3;
        while (num_index < n) {
            int count = s[count_index] - '0';
            const int num = 3 - s[num_index - 1] + '0';
            while (count && num_index < n) {
                s += num + '0';
                if (num == 1) {
                    ++one_count;
                }
                ++num_index;
                --count;
            }
            ++count_index;
        }
        return one_count;
    }
};