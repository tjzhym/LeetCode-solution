# Problem :    https://leetcode.com/problems/add-two-numbers/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-10




# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        list1 = []
        current_value = l1.val
        next_value = l1.next
        while True:
            list1.append(str(current_value))
            if next_value is None:
                break
            current_value = next_value.val
            next_value = next_value.next
            
        list2 = []
        current_value = l2.val
        next_value = l2.next
        while True:
            list2.append(str(current_value))
            if next_value is None:
                break
            current_value = next_value.val
            next_value = next_value.next
        
        num1 = int(''.join(list1[::-1]))
        num2 = int(''.join(list2[::-1]))
        
        sum_number = num1 + num2
        sum_number = [i for i in str(sum_number)]
        sum_number = sum_number[::-1]
        sum_number = [int(i) for i in sum_number]
        
        list3 = ListNode()
        idx = 0
        list3.val = sum_number[idx]
        if idx == len(sum_number)-1:
            return list3
        
        list3.next = ListNode()
        tmp = list3.next
        while True:
            idx += 1
            tmp.val = sum_number[idx]
            if idx == len(sum_number)-1:
                break
            tmp.next = ListNode()
            tmp = tmp.next
            
        return list3