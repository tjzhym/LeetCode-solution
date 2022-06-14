// Problem :    https://leetcode.com/problems/find-and-replace-pattern/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-14


#include <string>
#include <vector>
using namespace std;


class Solution {
private:
    bool match(string word, string pattern) {
        vector<int> charMap(26, -1);
        for (int index = 0; index < word.size(); ++index) {
            char x = word[index], y = pattern[index];

            if (charMap[x - 'a'] == -1) {
                charMap[x - 'a'] = y - 'a';
            }
            else if (charMap[x - 'a'] != y - 'a') {
                return false;
            }
        }
        return true;
    }

public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> answer;
        for (const auto& word : words) {
            if (match(word, pattern) && match(pattern, word)) {
                answer.emplace_back(word);
            }
        }
        return answer;
    }
};

// Hashmap