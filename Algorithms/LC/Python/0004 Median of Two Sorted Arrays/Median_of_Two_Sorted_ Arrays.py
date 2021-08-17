# Problem :    https://leetcode.com/problems/median-of-two-sorted-arrays/
# Solution:    https://github.com/tjzhym/LeetCode-solution
# Author :     zhym (tjzhym)
# Date   :     2021-7-16


##### Reminder: Python3
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        MergedList = []
        nums1Idx = 0
        nums2Idx = 0
        Length = len(nums1) + len(nums2)
        
        while (nums1Idx < len(nums1) or nums2Idx < len(nums2)):
            if nums1Idx < len(nums1) and nums2Idx < len(nums2):
                if nums1[nums1Idx] < nums2[nums2Idx]:
                    MergedList.append(nums1[nums1Idx])
                    nums1Idx += 1
                else:
                    MergedList.append(nums2[nums2Idx])
                    nums2Idx += 1
            elif nums1Idx == len(nums1):
                MergedList.append(nums2[nums2Idx])
                nums2Idx += 1
            elif nums2Idx == len(nums2):
                MergedList.append(nums1[nums1Idx])
                nums1Idx += 1
                
        if Length % 2 == 0:
            return (float((MergedList[int(Length/2) - 1] + MergedList[int(Length/2)])/2))   ##### int/int, result different from python2
        else:
            return (float(MergedList[int(Length/2)]))