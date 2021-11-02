// Problem :    https://leetcode.com/problems/reshape-the-matrix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-13


#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        vector<int> alphabetCount1(26,0);
        vector<int> alphabetCount2(26,0);
        for (int index = 0; index < s1.size(); ++index) {
            ++alphabetCount1[s1[index] - 'a'];
            ++alphabetCount2[s2[index] - 'a'];
        }
        if (alphabetCount1 == alphabetCount2) {
            return true;
        }
        for (int index = s1.size(); index < s2.size(); ++index) {
            --alphabetCount2[s2[index - s1.size()] - 'a'];
            ++alphabetCount2[s2[index] - 'a'];
            if (alphabetCount1 == alphabetCount2) {
                return true;
            }
        }
        return false;
    }
};

// Count Window