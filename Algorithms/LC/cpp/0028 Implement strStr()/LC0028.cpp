// Problem :    https://leetcode.com/problems/remove-element/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-15


#include <string>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int stringStep = haystack.size() - needle.size() + 1;
        bool flag = true;
        for (int stringIndex = 0; stringIndex < stringStep; ++stringIndex) {
            flag = true;
            for (int charIndex = 0; charIndex < needle.size(); ++charIndex) {
                if (haystack[stringIndex + charIndex] != needle[charIndex]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return stringIndex;
            }
        }
        return -1;
    }
};

// Traverse