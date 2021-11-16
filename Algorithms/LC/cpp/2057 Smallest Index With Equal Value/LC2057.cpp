// Problem :    https://leetcode.com/problems/smallest-index-with-equal-value/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-16


#include <vector>
using namespace std;


class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int index = 0; index < nums.size(); ++index) {
            if (index % 10 == nums[index]) {
                return index;
            }
        }
        return -1;
    }
};

// Traverse