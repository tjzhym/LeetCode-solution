// Problem :    https://leetcode.com/problems/build-an-array-with-stack-operations/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-16


#include <string>
#include <vector>


class Solution {
public:
	std::vector<std::string> buildArray(std::vector<int>& target, int n) {
		std::vector<std::string> res;
        int prev = 0;
        for (const int number : target) {
            for (int i = 0; i < number - prev - 1; i++) {
                res.emplace_back("Push");
                res.emplace_back("Pop");
            }
            res.emplace_back("Push");
            prev = number;
        }
        return res;
    }
};