// Problem :    https://leetcode.com/problems/longest-univalue-path/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-3


#include <algorithm>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int dfs(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left_length = dfs(root->left) + 1;
        int right_length = dfs(root->right) + 1;
        if (!root->left || root->left->val != root->val) {
            left_length = 0;
        }
        if (!root->right || root->right->val != root->val) {
            right_length = 0;
        }
        max_length = std::max(max_length, left_length + right_length);
        return std::max(left_length, right_length);
    }

    int longestUnivaluePath(TreeNode* root) {
        max_length = 0;
        dfs(root);
        return max_length;
    }

private:
    int max_length;
};