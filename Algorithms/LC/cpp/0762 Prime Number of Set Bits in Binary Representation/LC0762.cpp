// Problem :    https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-5


#include <vector>
using namespace std;


class Solution {
public:
    bool isPrime(int number) {
        if (number < 2) {
            return false;
        }

        for (int factor = 2; factor * factor <= number; factor++) {
            if (number % factor == 0) {
                return false;
            }
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int primeCount = 0;
        for (int number = left; number <= right; number++) {
            if (isPrime(__builtin_popcount(number))) {
                primeCount++;
            }
        }
        return primeCount;
    }
};

// Traverse
// __builtin_popcount is a builtin function from GCC compiler, __popcnt is a builtin function from MSVC compiler