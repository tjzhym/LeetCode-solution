// Problem :    https://leetcode.com/problems/decode-the-message/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2023-2-1


#include <string>
#include <unordered_map>


class Solution {
public:
	std::string decodeMessage(std::string key, std::string message) {
        char letter = 'a';
        std::unordered_map<char, char> table;
        table[' '] = ' ';
        for (const char c : key) {
            if (!table.count(c) && letter < 'z' + 1) {
                table[c] = letter;
                ++letter;
            }
        }
        for (char& c : message) {
            c = table[c];
        }
        return message;
    }
};