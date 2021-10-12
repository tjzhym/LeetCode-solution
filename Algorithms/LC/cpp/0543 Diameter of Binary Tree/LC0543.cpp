// Problem :    https://leetcode.com/problems/diameter-of-binary-tree/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-10-11


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
    int maxDiameter = 1;
    int deepthOfNode(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int leftDepth = deepthOfNode(root->left);
        int rightDepth = deepthOfNode(root->right);
        maxDiameter = max(maxDiameter, leftDepth + rightDepth + 1);
        return max(leftDepth, rightDepth) + 1;

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        deepthOfNode(root);
        return maxDiameter - 1;
    }
};

