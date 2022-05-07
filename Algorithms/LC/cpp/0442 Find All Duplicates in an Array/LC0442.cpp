// Problem :    https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-8


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicateNumber;
        for (int index = 0; index < nums.size(); ++index) {
            while (nums[index] != nums[nums[index] - 1]) {
                swap(nums[index], nums[nums[index] - 1]);
            }

        }
        for (int index = 0; index < nums.size(); ++index) {
            if (nums[index] != index + 1) {
                duplicateNumber.emplace_back(nums[index]);
            }
        }
        return duplicateNumber;
    }
};

// Traverse