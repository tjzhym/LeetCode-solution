// Problem :    https://leetcode.com/problems/missing-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
#include <set>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> numberSet;
        for (auto num : nums) {
            numberSet.insert(num);
        }
        for (int number = 0; number < nums.size(); ++number) {
            if (!numberSet.count(number)) {
                return number;
            }
        }
        return nums.size();
    }
};

// Set