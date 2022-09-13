// Problem :    https://leetcode.com/problems/maximum-swap/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-13


#include <string>


class Solution {
public:
    int maximumSwap(int num) {
	    std::string num_str = std::to_string(num);
        size_t n = num_str.size();
        size_t max_index = n - 1;
        int left_index = -1;
        int right_index = -1;
        for (int index = n - 1; index >= 0; --index) {
            if (num_str[index] > num_str[max_index]) {
                max_index = index;
            }
            else if (num_str[index] < num_str[max_index]) {
                left_index = index;
                right_index = max_index;
            }
        }

        if (left_index >= 0) {
	        std::swap(num_str[left_index], num_str[right_index]);
            return std::stoi(num_str);
        }
        return num;
    }
};