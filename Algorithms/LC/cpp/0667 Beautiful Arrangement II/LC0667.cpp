// Problem :    https://leetcode.com/problems/beautiful-arrangement-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-8


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> output;
        output.reserve(n);
        int front_count = n - k - 1;
        int number = 1;
        while (front_count) {
            output.emplace_back(number);
            ++number;
            --front_count;
        }
        int left = number;
        int  right = n;
        while (output.size() < n) {
            output.emplace_back(left);
            if (left != right) {
                output.emplace_back(right);
            }
            ++left;
            --right;
        }
        return output;
    }
};