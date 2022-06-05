// Problem :    https://leetcode.com/problems/decompress-run-length-encoded-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-6


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for (int index = 0; index < nums.size(); index += 2) {
            int freq = nums[index], val = nums[index + 1];
            while (freq) {
                --freq;
                result.emplace_back(val);
            }
        }
        return result;
    }
};

// Traverse