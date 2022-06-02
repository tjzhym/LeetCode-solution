// Problem :    https://leetcode.cn/problems/delete-node-in-a-bst/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-6-2


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
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* current = root, * currentParent = nullptr;
        while (current && current->val != key) {
            currentParent = current;
            if (key < current->val) {
                current = current->left;
            }
            else {
                current = current->right;
            }
        }

        if (current == nullptr) {
            return root;
        }

        TreeNode* temp;
        if (current->left == nullptr && current->right == nullptr) {
            temp = nullptr;
        }
        else if (current->right == nullptr) {
            temp = current->left;
        }
        else if (current->left == nullptr) {
            temp = current->right;
        }
        else {
            TreeNode* successor = current->right;
            while (successor->left) {
                successor = successor->left;
            }
            successor->left = current->left;
            temp = current->right;
        }

        if (current == root) {
            return temp;
        }
        else {
            if (currentParent->left == current) {
                currentParent->left = temp;
            }
            else {
                currentParent->right = temp;
            }
            return root;
        }

    }
};

// Traverse