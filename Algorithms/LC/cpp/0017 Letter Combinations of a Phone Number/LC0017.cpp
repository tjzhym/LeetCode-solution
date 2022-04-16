// Problem :    https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-17


#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    vector<string> PHONE = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

    void dfs(int currentIndex, string digits, string& combination, vector<string>& combinations) {
        if (currentIndex == digits.size()) {
            combinations.emplace_back(combination);
            return;
        }
        int currentNumber = digits[currentIndex] - '0';
        for (int index = 0; index < PHONE[currentNumber].size(); ++index) {
            combination += PHONE[currentNumber][index];
            dfs(currentIndex + 1, digits, combination, combinations);
            combination.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if (digits.empty()) {
            return combinations;
        }
        int currentIndex = 0;
        string combination;
        dfs(currentIndex, digits, combination, combinations);
        return combinations;
    }
};

// DFS