// Problem :    https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-9-10

#include <vector>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long chalkTotal = 0;
        for (auto chalkUse : chalk) {
            chalkTotal += chalkUse;
        }

        k = k % chalkTotal;
        while (k) {
            for (int stuID = 0; stuID < chalk.size(); ++stuID) {
                if (chalk[stuID] <= k) {
                    k -= chalk[stuID];
                }
                else {
                    return stuID;
                }
            }
        }
        return 0;
    }
};
