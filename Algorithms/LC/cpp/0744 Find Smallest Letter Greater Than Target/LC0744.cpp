// Problem :    https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-4


#include <vector>
using namespace std;


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target >= letters.back()) {
            return letters[0];
        }
        int leftIndex = 0, rightIndex = letters.size() - 1;
        while (leftIndex < rightIndex) {
            int middleIndex = (rightIndex - leftIndex) / 2 + leftIndex;
            if (letters[middleIndex] > target) {
                rightIndex = middleIndex;
            }
            else {
                leftIndex = middleIndex + 1;
            }
        }
        return letters[leftIndex];
    }
};

// Binary Search