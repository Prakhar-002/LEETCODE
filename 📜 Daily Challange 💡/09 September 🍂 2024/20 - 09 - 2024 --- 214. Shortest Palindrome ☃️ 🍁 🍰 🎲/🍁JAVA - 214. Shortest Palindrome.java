//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 214

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.lang.StringBuilder;

class Solution {
      public String shortestPalindrome(String s) {
            int i = 0;
            int n = s.length();

            // Find the longest palindrome starting from the beginning of the string
            for (int j = 0; j < n; j++) {
                  if (s.charAt(i) == s.charAt(n - j - 1)) {
                        i++;
                  }
            }

            // If the entire string is a palindrome, return it
            if (i == n) {
                  return s;
            }

            // Reverse the non-palindrome part of the string
            String p = new StringBuilder(s.substring(i)).reverse().toString();

            // Recursively find the shortest palindrome for the remaining part
            // and concatenate with the reversed part and the original string
            return p + shortestPalindrome(s.substring(0, i)) + s.substring(i);
      }
}