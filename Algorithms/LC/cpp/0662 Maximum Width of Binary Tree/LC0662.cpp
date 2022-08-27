// Problem :    https://leetcode.com/problems/maximum-width-of-binary-tree/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-28


#include <map>
using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution {
private:
    // map data structure
    // [index of the layer, the most left index in this layer]
    map<int, long long> tree_left_record;
    unsigned long long width;
public:
    void dfs(TreeNode* root, int depth, unsigned long long id) {
        if (root == nullptr) {
            return;
        }
        if (!tree_left_record.count(depth)) {
            tree_left_record[depth] = id;
        }
        width = max(width, id - tree_left_record[depth] + 1);
        dfs(root->left, depth + 1, id << 1);
        dfs(root->right, depth + 1, (id << 1) + 1);
    }

    int widthOfBinaryTree(TreeNode* root) {
        width = 0;
        int depth = 0;
        // id start from 1
        unsigned long long id = 1;
        dfs(root, depth, id);
        return width;
    }
};