// Problem :    https://leetcode.com/problems/reconstruct-original-digits-from-english/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-23


#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char, int> charCount;
        for (size_t index = 0; index < s.size(); ++index) {
            ++charCount[s[index]];
        }
        string output;
        vector<int> numberCount(10, 0);
        numberCount[0] = charCount['z'];
        numberCount[2] = charCount['w'];
        numberCount[4] = charCount['u'];
        numberCount[6] = charCount['x'];
        numberCount[8] = charCount['g'];

        numberCount[1] = charCount['o'] - numberCount[0] - numberCount[2] - numberCount[4];
        numberCount[3] = charCount['r'] - numberCount[0] - numberCount[4];
        numberCount[5] = charCount['f'] - numberCount[4];
        numberCount[7] = charCount['s'] - numberCount[6];

        numberCount[9] = charCount['i'] - numberCount[5] - numberCount[6] - numberCount[8];

        for (size_t index = 0; index < 10; ++index) {
            while (numberCount[index]) {
                output += '0' + index;
                --numberCount[index];
            }
        }
        return output;
    }
};

// Traverse