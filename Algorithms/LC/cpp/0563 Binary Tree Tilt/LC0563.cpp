// Problem :    https://leetcode.com/problems/binary-tree-tilt/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-17


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
    int dfs (TreeNode* root, int &sumTilt) {
        if (!root) {
            return 0;
        }
        int sumLeft = dfs(root->left, sumTilt);
        int sumRight = dfs(root->right, sumTilt);
        sumTilt += abs(sumLeft - sumRight);
        return root->val + sumLeft + sumRight;
    }
public:
    int findTilt(TreeNode* root) {
        int sumTilt = 0;
        dfs(root, sumTilt);
        return sumTilt;
    }
};

// Recursion