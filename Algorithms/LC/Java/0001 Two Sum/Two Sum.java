// Problem :    https://leetcode.com/problems/two-sum/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-11


class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        
        int nums_len = nums.length;
        for (int i = 0; i < nums_len-1; i++)
        {
            for (int j = i+1; j< nums_len; j++)
            {   
                if (nums[i] + nums[j] == target)
                {
                    return new int[]{i, j};
                }
                 
            } 
        }
        return new int[2];
    }
}
