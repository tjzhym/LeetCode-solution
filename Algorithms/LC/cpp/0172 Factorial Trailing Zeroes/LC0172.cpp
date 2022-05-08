// Problem :    https://leetcode.com/problems/factorial-trailing-zeroes/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-9


using namespace std;


class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n) {
            n /= 5;
            count += n;
        }
        return count;
    }
};

// Math