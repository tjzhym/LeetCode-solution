// Problem :    https://leetcode.com/problems/single-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-2-15


#include <vector>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        for (auto num : nums) {
            number ^= num;
        }
        return number;
    }
};

// bit manipulation