// Problem :    https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-3-27


using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }

        ListNode* currentNode = head;
        while (currentNode->next) {
            if (currentNode->val == currentNode->next->val) {
                currentNode->next = currentNode->next->next;
            } else {
                currentNode = currentNode->next;
            }
        }

        return head;
    }
};

// Traverse