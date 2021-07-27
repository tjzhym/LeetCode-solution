// Problem :    https://leetcode.com/problems/roman-to-integer/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-27


class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> ROMAN = new HashMap<Character, Integer>();
	    ROMAN.put('I', 1);
	    ROMAN.put('V', 5);
        ROMAN.put('X', 10);
        ROMAN.put('L', 50);
        ROMAN.put('C', 100);
        ROMAN.put('D', 500);
        ROMAN.put('M', 1000);
        
        int length = s.length();
        int intNumber = ROMAN.get(s.charAt(length - 1));
        for (int i = 0; i < length - 1; i++) {
            if (ROMAN.get(s.charAt(i)) < ROMAN.get(s.charAt(i + 1)))
                intNumber -= ROMAN.get(s.charAt(i));
            else
                intNumber += ROMAN.get(s.charAt(i));
        }
        return intNumber;
    }
}

