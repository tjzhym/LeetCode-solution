// Problem :    https://leetcode-cn.com/problems/string-to-url-lcci/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-23


#include <string>
using namespace std;


class Solution {
public:
    string replaceSpaces(string S, int length) {
        int copyIndex = length - 1;
        for (int index = 0; index < length; ++index) {
            if (S[index] == ' ') {
                copyIndex += 2;
            }
        }
        S[copyIndex + 1] = '\0';
        for (int index = length - 1; index > -1; --index) {
            if (S[index] == ' ') {
                S[copyIndex] = '0';
                S[copyIndex - 1] = '2';
                S[copyIndex - 2] = '%';
                copyIndex -= 3;
            }
            else {
                S[copyIndex] = S[index];
                --copyIndex;
            }
        }
        return S;
    }
};

// Double Pointer