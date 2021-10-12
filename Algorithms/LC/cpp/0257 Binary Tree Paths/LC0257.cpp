// Problem :    https://leetcode.com/problems/binary-tree-paths/
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
    void buildPath(TreeNode* root, string path, vector<string>& paths) {
        if (root) {
            path += to_string(root->val);
            if (!root->left && !root->right) {
                paths.push_back(path);
            }
            else {
                path += "->";
                buildPath(root->left, path, paths);
                buildPath(root->right, path, paths);
            }
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        buildPath(root, "", paths);
        return paths;
    }
};

// Recursion
