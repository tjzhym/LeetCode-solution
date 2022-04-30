// Problem :    https://leetcode.com/problems/valid-palindrome/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-30


#include <string>
using namespace std;

	
class Solution {
public:
    bool isPalindrome(std::string s) {
        int leftIndex = 0, rightIndex = s.size() - 1;
        while (leftIndex < rightIndex) {
            while (leftIndex < rightIndex && !isalnum(s[leftIndex])) {
                ++leftIndex;
            }
            while (leftIndex < rightIndex && !isalnum(s[rightIndex])) {
                --rightIndex;
            }
            if (leftIndex < rightIndex) {
                if (tolower(s[leftIndex]) != tolower(s[rightIndex])) {
                    return false;
                }
                ++leftIndex;
                --rightIndex;
            }
        }
        return true;
    }
};

// Traverse