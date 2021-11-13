// Problem :    https://leetcode.com/problems/detect-capital/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-13


#include <string>
using namespace std;


class Solution {
public:
    bool detectCapitalUse(string word) {
        if (islower(word[0]) && word.size() > 1 && isupper(word[1])) {
            return false;
        }

        int isCapital = 0; // isupper function return int
        if (word.size() > 2) {
            isCapital = isupper(word[1]);
        }

        for (int index = 2; index < word.size(); ++index) {
            if (isupper(word[index]) != isCapital) {
                return false;
            }
        }

        return true;
    }
};

// Traverse