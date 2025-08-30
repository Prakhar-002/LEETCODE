//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public String longestPalindrome(String s) {
            // Variable to record the starting index of longest palindrome found
            int resIdx = 0;
            // Variable to record the length of longest palindrome found
            int resLen = 0;

            // Iterate over each character as possible palindrome center
            for (int i = 0; i < s.length(); i++) {
                  // Check odd length palindromes: center at i
                  int l = i, r = i;
                  // Expand while characters are equal and indices valid
                  while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                        // Update longest palindrome if current one is longer
                        if ((r - l + 1) > resLen) {
                              resIdx = l;
                              resLen = r - l + 1;
                        }
                        l--; // Expand left
                        r++; // Expand right
                  }

                  // Check even length palindromes: center between i and i+1
                  l = i;
                  r = i + 1;
                  // Expand while characters equal and in bounds
                  while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                        if ((r - l + 1) > resLen) {
                              resIdx = l;
                              resLen = r - l + 1;
                        }
                        l--;
                        r++;
                  }
            }

            // Return longest palindromic substring found
            return s.substring(resIdx, resIdx + resLen);
      }
}
