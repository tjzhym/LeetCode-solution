// Problem :    https://leetcode.com/problems/defuse-the-bomb/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2022-9-24


#include <numeric>
#include <vector>


class Solution {
public:
	std::vector<int> decrypt(std::vector<int>& code, int k) {
        int size = code.size();
        std::vector<int> decrypt_code(size, 0);
        if (k == 0) {
            return decrypt_code;
        }
        int left = k > 0 ? 1 : size + k;
        int right = k > 0 ? k : size - 1;
        decrypt_code[0] = std::accumulate(code.begin() + left, code.begin() + right + 1, 0);
        for (int index = 1; index < code.size(); ++index) {
            right = GetIndex(right + 1, size);
            decrypt_code[index] = decrypt_code[index - 1] - code[left] + code[right];
            left = GetIndex(left + 1, size);
        }
        return decrypt_code;
    }

private:
    inline int GetIndex(const int index, const int size) {
        return (index + size) % size;
    }
};