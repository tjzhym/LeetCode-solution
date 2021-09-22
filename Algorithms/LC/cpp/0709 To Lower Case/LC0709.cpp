// Problem :    https://leetcode.com/problems/to-lower-case/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-22


class Solution {
public:
    string toLowerCase(string s)
    {

        for (int i = 0; i < int(s.length()); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = char(s[i] + 32);
            }

        }
        return s;
    }
};
