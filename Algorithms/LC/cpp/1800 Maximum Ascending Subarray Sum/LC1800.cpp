// Problem :    https://leetcode.com/problems/maximum-ascending-subarray-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-7


#include <string>
#include <vector>


class Solution {
public:
    int maxAscendingSum(std::vector<int>& nums) {
        int sum = nums.front();
        int cur_sum = nums.front();
        int last = nums.front();
        for (int index = 1; index < nums.size(); ++index) {
            int num = nums[index];
            if (num > last) {
                cur_sum += num;
            }
            else {
                cur_sum = num;
            }
            sum = std::max(sum, cur_sum);
            last = num;
        }
        return sum;
    }
};