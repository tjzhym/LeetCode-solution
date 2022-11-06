// Problem :    https://leetcode.com/problems/goal-parser-interpretation/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-11-5


#include <string>


class Solution {
public:
	std::string interpret(std::string command) {
        std::string output;
        for (int index = 0; index < command.size(); ++index) {
            if (command[index] == 'G') {
                output += 'G';
            }
            if (command[index] == ')') {
                if (command[index - 1] == '(') {
                    output += 'o';
                }
                else {
                    output += "al";
                }
            }
        }
        return output;
    }
};