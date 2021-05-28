// Problem :    https://leetcode.com/problems/two-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym
// Date   :     2021-5-28



#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    vector <int> vec{ i,j };
                    return vec;
                }
            }
        }
        vector <int> vec{};
        return vec;
    }
};