// Problem :    https://leetcode.com/problems/longest-common-prefix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-28


#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()) return "";

        sort(begin(strs), end(strs));
        string shortest = strs.front();
        string longest = strs.back();
        string commonPrefix = "";

        for (int i = 0; i < shortest.size(); i++) {
            if (shortest[i] == longest[i]) {
                commonPrefix += shortest[i];
            }
            else {
                break;
            }
        }
        return commonPrefix;
    }
};
