// Problem :    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-6


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tempMaxProfit = 0, tempMinPrice = prices[0];
        for (auto price : prices) {
            tempMinPrice = min(price, tempMinPrice);
            tempMaxProfit = max(price - tempMinPrice, tempMaxProfit);
        }
        return tempMaxProfit;
    }
};

// Dynamic Programming