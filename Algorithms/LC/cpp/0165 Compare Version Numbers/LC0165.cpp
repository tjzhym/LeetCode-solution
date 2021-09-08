// Problem :    https://leetcode.com/problems/compare-version-numbers/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-8

#include <string>
using namespace std;


class Solution {
public:
    int compareVersion(string version1, string version2) {
        int subVersion1 = 0, subVersion2 = 0;
        int index1 = 0, index2 = 0;
        while (index1 < version1.size() || index2 < version2.size()) {
            subVersion1 = 0;
            subVersion2 = 0;
            while (index1 < version1.size() && version1[index1] != '.') {
                subVersion1 = subVersion1 * 10 + version1[index1] - '0';
                ++index1;
            }
            while (index2 < version2.size() && version2[index2] != '.') {
                subVersion2 = subVersion2 * 10 + version2[index2] - '0';
                ++index2;
            }
            ++index1;
            ++index2;
            if (subVersion1 > subVersion2) {
                return 1;
            }
            else if (subVersion1 < subVersion2) {
                return -1;
            }

        }
        return 0;
    }
};

