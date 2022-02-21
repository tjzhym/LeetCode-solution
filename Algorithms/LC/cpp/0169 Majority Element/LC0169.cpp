// Problem :    https://leetcode.com/problems/majority-element/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-2-21


#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numberCount;
        int mostNumber = nums[0], mostCount = 0;
        for (auto num : nums) {
            ++numberCount[num];
            if (numberCount[num] > mostCount) {
                mostCount = numberCount[num];
                mostNumber = num;
            }
        }
        return mostNumber;
    }
};

// Hashmap