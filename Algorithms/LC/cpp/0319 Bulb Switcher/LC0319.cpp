// Problem :    https://leetcode.com/problems/bulb-switcher/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-14


#include <vector>
using namespace std;


class Solution {
private:
    void changeCount (vector<int> &bulbVector) {
        for (int index = 0; index < bulbVector.size(); ++index) {
            int count = 0;
            for (int factor = 1; factor < index + 2; ++factor) {
                if ((index + 1) % factor == 0) {
                    ++count;
                }
            }
            if (count % 2) {
                bulbVector[index] = 1;
            }
        }
    }
public:
    int bulbSwitch(int n) {
        vector<int> bulbVector(n, 0);
        changeCount(bulbVector);
        int count = 0;
        for (int index = 0; index < n; ++index) {
            if (bulbVector[index]) {
                ++count;
            }
        }
        return count;
    }
};

// Brute Force (NOT PASS)