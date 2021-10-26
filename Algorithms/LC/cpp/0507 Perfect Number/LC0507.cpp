// Problem :    https://leetcode.com/problems/perfect-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-25


#include <cmath>
using namespace std;


class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {
            return false;
        }
        int factorNumber = 2, factorSum = 1;
        while (factorNumber <= sqrt(num)) {
            if (!(num % factorNumber)) {
                factorSum += factorNumber;
                if (factorNumber * factorNumber == num) {
                    break;
                }
                factorSum += num / factorNumber;
            }
            ++factorNumber;
        }
        return factorSum == num;
    }
};

// Traverse
