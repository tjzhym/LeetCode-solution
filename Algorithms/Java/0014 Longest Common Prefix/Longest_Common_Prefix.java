// Problem :    https://leetcode.com/problems/longest-common-prefix/
// Solution:    https://github.com/tjzhym/LeetCode-solution
// Author :     zhym (tjzhym)
// Date   :     2021-7-28

import java.util.Arrays;

class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs== null) return "";
        
        Arrays.sort(strs);
        char[] shortest = strs[0].toCharArray();
        char[] longest = strs[strs.length-1].toCharArray();
        String commonPrefix = "";
            
        for(int i=0; i<shortest.length; i++){
            if(shortest[i]==longest[i]){
                commonPrefix += shortest[i];
            } else {
                break;
            }
        }
        return commonPrefix;
    }
}