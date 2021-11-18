// Problem :    https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-17


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missingNumber;
        for (size_t index = 0; index < nums.size(); ++index) {
            int number = abs(nums[index]);
            nums[number - 1] = -abs(nums[number - 1]);
        }
        for (size_t index = 0; index < nums.size(); ++index) {
            if (nums[index] > 0) {
                missingNumber.push_back(index + 1);
            }
        }
        return missingNumber;
    }
};

// Traverse