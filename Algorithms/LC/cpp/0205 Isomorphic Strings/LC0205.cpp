// Problem :    https://leetcode.com/problems/isomorphic-strings/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-8


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sVector(128, 0);
        vector<int> tVector(128, 0);
        for (int index = 0; index < s.size(); ++index) {
            int c1 = s[index], c2 = t[index];
            if (sVector[c1] != tVector[c2]) {
                return false;
            }
            sVector[c1] = index + 1;
            tVector[c2] = index + 1;
        }
        return true;
    }
};

// Traverse