// Problem :    https://leetcode.com/problems/linked-list-cycle/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-4-27


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
    bool hasCycle(ListNode* head) {
        ListNode* pSlow = head;
        ListNode* pFast = head;
        while (pFast && pFast->next) {
            pSlow = pSlow->next;
            pFast = pFast->next->next;
            if (pSlow == pFast) {
                return true;
            }
        }
        return false;
    }
};

// Traverse