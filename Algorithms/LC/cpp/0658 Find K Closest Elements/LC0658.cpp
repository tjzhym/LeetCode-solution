// Problem :    https://leetcode.com/problems/find-k-closest-elements/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-8-26


#include <vector>
using namespace std;


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // Binary Search
        // int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int right = BinarySearch(arr, x);
        int left = right - 1;
        // Double Pointer
        while (k) {
            if (left < 0) {
                ++right;
            }
            else if (right > arr.size() - 1) {
                --left;
            }
            else if (arr[right] - x < x - arr[left]) {
                ++right;
            }
            else {
                --left;
            }
            --k;
        }
        vector<int> result(arr.begin() + left + 1, arr.begin() + right);
        return result;
    }

private:
    int BinarySearch(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return mid;
            }
            else if (arr[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};