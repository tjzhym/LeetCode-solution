// Problem :    https://leetcode.com/problems/goat-latin/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-21


#include <string>
using namespace std;


class Solution {
public:
    string toGoatLatin(string sentence) {
        int wordIndex = 1;
        int leftIndex = 0, rightIndex = 0;
        string modifiedSentence;
        for (int index = 0; index < sentence.size(); ++index) {
            if (index == sentence.size() - 1 || sentence[index + 1] == ' ') {
                rightIndex = index;
                char ch = tolower(sentence[leftIndex]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    modifiedSentence += sentence.substr(leftIndex, rightIndex - leftIndex + 1) + 'm' + string(wordIndex + 1, 'a');
                }
                else {
                    modifiedSentence += sentence.substr(leftIndex + 1, rightIndex - leftIndex) + sentence[leftIndex] + 'm' + string(wordIndex + 1, 'a');
                }

                ++wordIndex;
                if (index != sentence.size() - 1) {
                    modifiedSentence += ' ';
                }
                leftIndex = rightIndex + 2;
            }
        }
        return modifiedSentence;
    }
};

// Traverse