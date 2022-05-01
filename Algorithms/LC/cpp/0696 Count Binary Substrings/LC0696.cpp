// Problem :    https://leetcode.com/problems/count-binary-substrings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-1


#include <string>
using namespace std;


class Solution {
public:
    int countBinarySubstrings(string s) {
        int lastCount = 0, totalCount = 0;
        int currentIndex = 0, n = s.size();
        while (currentIndex < n) {
            char character = s[currentIndex];
            int count = 0;
            while (currentIndex < n && s[currentIndex] == character) {
                ++currentIndex;
                ++count;
            }
            totalCount += min(lastCount, count);
            lastCount = count;
        }
        return totalCount;
    }
};

// Traverse