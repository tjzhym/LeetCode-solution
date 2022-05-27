// Problem :    https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-28


using namespace std;


class Solution {
public:
    int numberOfSteps(int num) {
        if (num == 0) {
            return 0;
        }
        int count = 0;
        while (num) {
            count += 1 + (num & 1);
            num >>= 1;
        }
        --count;
        return count;
    }
};

// Bit Manipulation