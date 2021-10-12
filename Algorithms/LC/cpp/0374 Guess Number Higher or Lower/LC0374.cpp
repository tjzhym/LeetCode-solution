// Problem :    https://leetcode.com/problems/guess-number-higher-or-lower/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-12


/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lowerBound = 1, upperBound = n;
        int pickNumber = 0;
        int guessStatus = guess(pickNumber);
        while (guessStatus) {
            pickNumber = lowerBound + (upperBound - lowerBound) / 2;
            guessStatus = guess(pickNumber);
            if (guessStatus == 1) {
                lowerBound = pickNumber + 1;
            }
            else if (guessStatus == -1) {
                upperBound = pickNumber;
            }
            guessStatus = guess(pickNumber);
        }
        return pickNumber;
    }
};

