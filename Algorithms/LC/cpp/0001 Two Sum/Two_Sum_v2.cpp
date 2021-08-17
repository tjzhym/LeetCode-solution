// Problem :    https://leetcode.com/problems/two-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-5-28


#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numberPair;
        vector<int> targetIndex;
        for (int currentIndex = 0; currentIndex < nums.size(); currentIndex++) {
            auto findResult = numberPair.find(target - nums[currentIndex]);
            if (findResult != numberPair.end()) {
                targetIndex = { findResult->second,currentIndex };
                return targetIndex;
            }
            numberPair[nums[currentIndex]] = currentIndex;
        }
        return targetIndex;
    }
};