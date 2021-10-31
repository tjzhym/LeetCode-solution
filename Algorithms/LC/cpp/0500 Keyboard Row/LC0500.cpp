// Problem :    https://leetcode.com/problems/keyboard-row/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-30


#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string lineIndex = "12210111011122000010020202";
        vector<string> output;
        for (auto word : words) {
            bool isValid = true;
            int wordLine = lineIndex[tolower(word[0]) - 'a'];
            for (int wordIndex = 1; wordIndex < word.size(); ++wordIndex) {
                if (lineIndex[tolower(word[wordIndex]) - 'a'] != wordLine) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                output.push_back(word);
            }
        }
        return output;
    }
};

// Brute Force
