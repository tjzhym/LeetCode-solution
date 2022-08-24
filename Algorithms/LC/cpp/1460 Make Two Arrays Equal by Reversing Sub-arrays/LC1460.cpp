// Problem :    https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-24


#include <vector>
using namespace std;


class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> number_count(1001);
        for (const int number : target) {
            ++number_count[number];
        }
        for (const int number : arr) {
            --number_count[number];
        }

        for (const int count : number_count) {
            if (count) {
                return false;
            }
        }
        return true;
    }
};