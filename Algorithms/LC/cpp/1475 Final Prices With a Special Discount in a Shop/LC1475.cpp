// Problem :    https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-1


#include <stack>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> final_prices(n);
        stack<int> st;
        for (int index = n - 1; index > -1; --index) {
            while (!st.empty() && prices[index] < st.top()) {
                st.pop();
            }
            if (!st.empty()) {
                final_prices[index] = prices[index] - st.top();
            }
            else {
                final_prices[index] = prices[index];
            }
            st.emplace(prices[index]);
        }
        return final_prices;
    }
};