// Problem :    https://leetcode.com/problems/length-of-last-word/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-22


class Solution {
public:
    int lengthOfLastWord(string s) {
        int charIndex = s.size() - 1, count = 0;
        //skip last spaces
        while (s[charIndex] == ' ') {
            --charIndex;
        }
        //count length
        while (charIndex >= 0 && s[charIndex] != ' ') {
            --charIndex;
            ++count;
        }

        return count;
    }
};

