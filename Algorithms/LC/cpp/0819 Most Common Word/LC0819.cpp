// Problem :    https://leetcode.com/problems/most-common-word/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-17


#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> wordFrequency;
        unordered_set<string> bannedSet;

        for (auto bannedWord : banned) {
            bannedSet.emplace(bannedWord);
        }

        string word;
        for (size_t index = 0; index < paragraph.size(); ++index) {
            char character = paragraph[index];
            if (isalpha(character)) {
                word.push_back(tolower(character));
            }
            if (index == paragraph.size() - 1 || !isalpha(paragraph[index + 1])) {
                if (word.size() > 0 && !bannedSet.count(word)) {
                    ++wordFrequency[word];
                }
                word = "";
            }
        }

        string currentMostCommonWord;
        int maxFrequency = 0;
        for (auto [word, frequency] : wordFrequency) {
            if (frequency > maxFrequency) {
                currentMostCommonWord = word;
                maxFrequency = frequency;
            }
        }
        return currentMostCommonWord;
    }
};

// Hashmap