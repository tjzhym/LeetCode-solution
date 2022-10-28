// Problem :    https://leetcode.com/problems/next-greater-element-i/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-10-28


#include <stack>
#include <unordered_map>
#include <vector>


class Solution {
public:
	std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
		std::unordered_map<int, int> hashmap;
		std::stack<int> mono_stack;
        for (int index = nums2.size() - 1; index >= 0; --index) {
            int num = nums2[index];
            while (!mono_stack.empty() && num > mono_stack.top()) {
                mono_stack.pop();
            }
            hashmap[num] = mono_stack.empty() ? -1 : mono_stack.top();
            mono_stack.push(num);
        }
        std::vector<int> greater_list(nums1.size());
        for (int index = 0; index < nums1.size(); ++index) {
            greater_list[index] = hashmap[nums1[index]];
        }
        return greater_list;
    }
};