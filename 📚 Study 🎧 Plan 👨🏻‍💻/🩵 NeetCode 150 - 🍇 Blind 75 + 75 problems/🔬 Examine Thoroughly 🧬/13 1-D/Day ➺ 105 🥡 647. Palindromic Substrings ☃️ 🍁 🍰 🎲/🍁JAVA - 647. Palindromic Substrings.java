//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 647

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

public class Solution {
      public int countSubstrings(String s) {
            int res = 0; // To store the count of palindromic substrings

            // Iterate over each character in the string as the center of palindrome
            for (int i = 0; i < s.length(); i++) {
                  // Check for odd-length palindromes (single character center)
                  int l = i, r = i;
                  while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                        res++;    // Found palindrome substring, increment count
                        l--; r++; // Expand left and right pointers outward
                  }

                  // Check for even-length palindromes (center between two characters)
                  l = i; r = i + 1;
                  while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                        res++;    // Found palindrome substring of even length
                        l--; r++; // Expand left and right pointers outward
                  }
            }
            return res; // Return total count of palindromic substrings
      }
}
