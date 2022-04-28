// Problem :    https://leetcode.com/problems/intersection-of-two-linked-lists/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-28


#include <cstddef>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* pA = headA, * pB = headB;
        while (pA != pB) {
            if (!pA) {
                pA = headB;
            }
            else {
                pA = pA->next;
            }
            if (!pB) {
                pB = headA;
            }
            else {
                pB = pB->next;
            }
        }
        return pA;
    }
};

// Traverse