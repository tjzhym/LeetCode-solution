// Problem :    https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-5-1


#include <vector>
using namespace std;


//Definition for a binary tree node.
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
    void inOrder(TreeNode* root, std::vector<int>& ordedNumber) {
        if (!root) {
            return;
        }
        inOrder(root->left, ordedNumber);
        ordedNumber.emplace_back(root->val);
        inOrder(root->right, ordedNumber);
    }

public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ordedNumber1;
        inOrder(root1, ordedNumber1);
        vector<int> ordedNumber2;
        inOrder(root2, ordedNumber2);

        int index1 = 0, index2 = 0, n1 = ordedNumber1.size(), n2 = ordedNumber2.size();
        vector<int> ordedNumber;
        while (index1 < n1 || index2 < n2) {
            if (index1 == n1) {
                ordedNumber.emplace_back(ordedNumber2[index2]);
                ++index2;
            }
            else if (index2 == n2) {
                ordedNumber.emplace_back(ordedNumber1[index1]);
                ++index1;
            }
            else {
                if (ordedNumber1[index1] < ordedNumber2[index2]) {
                    ordedNumber.emplace_back(ordedNumber1[index1]);
                    ++index1;
                }
                else {
                    ordedNumber.emplace_back(ordedNumber2[index2]);
                    ++index2;
                }
            }
        }
        return ordedNumber;
    }
};

// Recursion