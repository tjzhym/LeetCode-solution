// Problem :    https://leetcode.com/problems/validate-stack-sequences/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-31


#include <stack>
#include <vector>
using namespace std;


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        size_t index = 0;
        for (const int number : pushed) {
            st.emplace(number);
            while (!st.empty() && st.top() == popped[index]) {
                st.pop();
                ++index;
            }
        }
        return st.empty();
    }
};