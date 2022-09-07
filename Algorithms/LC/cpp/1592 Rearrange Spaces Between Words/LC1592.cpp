// Problem :    https://leetcode.com/problems/rearrange-spaces-between-words/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-7


#include <cctype>
#include <string>
#include <vector>


class Solution {
public:
    void ProcessText(std::string text) {
        // count total space and store the start index and end index of word
        total_space_ = 0;
        index_list_.reserve(50);
        word_on_ = false;
        std::pair<int, int> temp_pair;
        for (size_t index = 0; index < text.size(); ++index) {
            const char c = text[index];
            if (isspace(c)) {
                ++total_space_;
            }
            if (isalpha(c)) {
                if (index == 0 || isspace(text[index - 1])) {
                    temp_pair.first = index;
                    word_on_ = true;
                }
                if (index == text.size() - 1 || isspace(text[index + 1])) {
                    temp_pair.second = index;
                    if (word_on_) {
                        index_list_.emplace_back(temp_pair);
                    }
                    word_on_ = false;
                }
            }
        }
    }

    std::string reorderSpaces(std::string text) {
        ProcessText(text);
        if (index_list_.size() == 1) {
            int index = 0;
            int left = index_list_[0].first;
            int right = index_list_[0].second;
            for (int src_index = left; src_index <= right; ++src_index) {
                text[index] = text[src_index];
                if (index != src_index) {
                    text[src_index] = ' ';
                }
                ++index;
            }
            return text;
        }
        int per_space = total_space_ / (index_list_.size() - 1);
        int index = 0;
        std::string new_text(text.size(), ' ');
        for (auto per_pair : index_list_) {
            int left = per_pair.first;
            int right = per_pair.second;
            for (int src_index = left; src_index <= right; ++src_index) {
                new_text[index] = text[src_index];
                ++index;
            }
            int space = per_space;
            while (index < text.size() && space) {
                new_text[index] = ' ';
                ++index;
                --space;
            }
        }
        for (; index < text.size(); ++index) {
            new_text[index] = ' ';
        }
        return new_text;
    }

private:
    int total_space_;
    // index_list:  std::pair (start_index, end_index)
    std::vector<std::pair<int, int> > index_list_;
    bool word_on_;
};