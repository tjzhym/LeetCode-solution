// Problem :    https://leetcode.com/problems/single-number-iii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-6


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> numberCount;
        for (auto num : nums) {
            ++numberCount[num];
        }
        vector<int> output;
        for (auto [number, times] : numberCount) {
            if (times == 1) {
                output.push_back(number);
            }
        }
        return output;
    }
};

// Hash Map
