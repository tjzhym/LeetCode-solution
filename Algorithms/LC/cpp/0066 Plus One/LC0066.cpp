// Problem :    https://leetcode.com/problems/plus-one/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-20


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int digitNumber = digits.size();
        for (int index = digitNumber - 1; index > -1; --index) {
            if (digits[index] == 9) {
                digits[index] = 0;
            }
            else {
                ++digits[index];
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

// Traverse

