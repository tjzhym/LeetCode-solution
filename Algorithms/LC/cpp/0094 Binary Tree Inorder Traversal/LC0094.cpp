// Problem :    https://leetcode.com/problems/binary-tree-inorder-traversal/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-1


#include <vector>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
private:
    vector<int> ordedNumber;
public:
    void inOrder(TreeNode* root) {
        if (!root) {
            return;
        }
        inOrder(root->left);
        ordedNumber.emplace_back(root->val);
        inOrder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return ordedNumber;
    }
};

// Recursion