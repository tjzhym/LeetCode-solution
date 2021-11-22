// Problem :    https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-11-22


#include <queue>
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
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        int depth = 0;
        while (!nodeQueue.empty()) {
            int size = nodeQueue.size();
            while (size) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                if (currentNode->left) {
                    nodeQueue.push(currentNode->left);
                }
                if (currentNode->right) {
                    nodeQueue.push(currentNode->right);
                }
                --size;
            }
            ++depth;
        }
        return depth;
    }
};

// Traverse (BFS)