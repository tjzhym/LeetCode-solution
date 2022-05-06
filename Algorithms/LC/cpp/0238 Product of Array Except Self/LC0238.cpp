// Problem :    https://leetcode.com/problems/product-of-array-except-self/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-6


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        answer[0] = 1;

        for (int index = 1; index < n; ++index) {
            answer[index] = answer[index - 1] * nums[index - 1];
        }
        int currentProduct = 1;
        for (int index = n - 1; index > -1; --index) {
            answer[index] *= currentProduct;
            currentProduct *= nums[index];
        }
        return answer;
    }
};

// Traverse