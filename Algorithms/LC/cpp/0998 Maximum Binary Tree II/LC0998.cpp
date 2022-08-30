// Problem :    https://leetcode.com/problems/maximum-binary-tree-ii/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-30


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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode* parent = nullptr;
        TreeNode* current = root;
        while (current) {
            if (val > current->val) {
                if (!parent) {
                    return new TreeNode(val, current, nullptr);
                }
                TreeNode* temp = new TreeNode(val, current, nullptr);
                parent->right = temp;
                return root;
            }
            else {
                parent = current;
                current = current->right;
            }
        }
        parent->right = new TreeNode(val);
        return root;
    }
};