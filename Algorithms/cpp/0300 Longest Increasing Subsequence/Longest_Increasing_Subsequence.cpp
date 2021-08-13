// Problem :    https://leetcode.com/problems/remove-k-digits/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-13

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() <= k) {
            return "0";
        }
        vector<char> numberVector;
        for (auto digit : num) {
            while (!numberVector.empty() && k && numberVector.back() > digit) {
                numberVector.pop_back();
                k--;
            }
            numberVector.push_back(digit);
        }
        for (; k > 0; k--) {
            numberVector.pop_back();
        }

        bool isLeadingZero = true;
        string numberString;
        for (auto digit : numberVector) {
            if (digit == '0' && isLeadingZero) {
                continue;
            }
            isLeadingZero = false;
            numberString += digit;
        }
        return numberString.empty() ? "0" : numberString;
    }
};

