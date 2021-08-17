// Problem :    https://leetcode.com/problems/three-consecutive-odds/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-8-11

#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddCount = 0;
        for (int index = 0; index < arr.size(); index++) {
            if (arr[index] % 2 == 1) {
                oddCount += 1;
                if (oddCount == 3) {
                    return true;
                }
            }
            else {
                oddCount = 0;
            }
        }
        return false;
    }
};

