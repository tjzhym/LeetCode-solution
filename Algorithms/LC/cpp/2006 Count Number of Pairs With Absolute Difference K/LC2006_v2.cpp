// Problem :    https://leetcode-cn.com/problems/count-number-of-pairs-with-absolute-difference-k/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-2-9


#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> numberCount;
        for (int index = 0; index < nums.size(); ++index) {
            if (numberCount.count(nums[index] - k)) {
                count += numberCount[nums[index] - k];
            }
            if (numberCount.count(nums[index] + k)) {
                count += numberCount[nums[index] + k];
            }
            numberCount[nums[index]]++;
        }
        return count;
    }
};

// Hashmap