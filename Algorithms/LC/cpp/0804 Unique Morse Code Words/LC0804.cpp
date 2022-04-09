// Problem :    https://leetcode.com/problems/unique-morse-code-words/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-10


#include <string>
#include <unordered_set>
#include <vector>
using namespace std;


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        static vector<string> MORSE = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                        "...","-","..-","...-",".--","-..-","-.--","--.." };
        unordered_set<string> morseMemory;
        for (auto word : words) {
            string morseString;
            for (auto ch : word) {
                morseString += MORSE[ch - 'a'];
            }
            morseMemory.insert(morseString);
        }
        return morseMemory.size();
    }
};

// Hashmap