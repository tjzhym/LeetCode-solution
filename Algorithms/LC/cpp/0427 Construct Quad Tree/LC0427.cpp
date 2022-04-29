// Problem :    https://leetcode.com/problems/construct-quad-tree/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-30


#include <vector>
using namespace std;


// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};


class Solution {
private:
    vector<vector<int>> grid;
public:
    Node* construct(vector<vector<int>>& grid) {
        this->grid = grid;
        return dfs(0, 0, grid.size());
    }

    Node* dfs(int topIndex, int leftIndex, int size) {
        Node* newNode = new Node();
        if (checkLeaf(topIndex, leftIndex, size)) {
            newNode->val = grid[topIndex][leftIndex];
            newNode->isLeaf = true;
        }
        else {
            newNode->val = 1;
            newNode->isLeaf = false;
            newNode->topLeft = dfs(topIndex, leftIndex, size / 2);
            newNode->topRight = dfs(topIndex, leftIndex + size / 2, size / 2);
            newNode->bottomLeft = dfs(topIndex + size / 2, leftIndex, size / 2);
            newNode->bottomRight = dfs(topIndex + size / 2, leftIndex + size / 2, size / 2);
        }
        return newNode;
    }

    bool checkLeaf(int& topIndex, int& leftIndex, int& size) {
        int value = grid[topIndex][leftIndex];
        for (int rowIndex = topIndex; rowIndex < topIndex + size; ++rowIndex) {
            for (int columnIndex = leftIndex; columnIndex < leftIndex + size; ++columnIndex) {
                if (grid[rowIndex][columnIndex] != value) {
                    return false;
                }
            }
        }
        return true;
    }
};

// DFS