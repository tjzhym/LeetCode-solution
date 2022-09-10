// Problem :    https://leetcode.com/problems/trim-a-binary-search-tree/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-10


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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        while (root && (root->val < low || root->val > high)) {
            if (root->val < low) {
                root = root->right;
            }
            else if (root->val > high) {
                root = root->left;
            }
        }
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode* temp;
        // left
        temp = root;
        while (temp->left) {
            if (temp->left->val < low) {
                temp->left = temp->left->right;
            }
            else {
                temp = temp->left;
            }
        }
        // right
        temp = root;
        while (temp->right) {
            if (temp->right->val > high) {
                temp->right = temp->right->left;
            }
            else {
                temp = temp->right;
            }
        }
        return root;
    }
};