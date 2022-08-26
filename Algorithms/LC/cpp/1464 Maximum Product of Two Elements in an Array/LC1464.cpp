// Problem :    https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-26


#include <vector>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first_maximum = INT_MIN;
        int second_maximun = INT_MIN;
        for (const int num : nums) {
            if (num > first_maximum) {
                second_maximun = first_maximum;
                first_maximum = num;
            }
            else if (num > second_maximun) {
                second_maximun = num;
            }
        }
    	return (first_maximum - 1) * (second_maximun - 1);
    }
};