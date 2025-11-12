//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of Integer

//? 🧺 Space complexity ➺ O(n)

class Solution {
      // Checks if integer x is a palindrome by comparing characters from both ends
      public boolean isPalindrome(int x) {
            String s = Integer.toString(x);  // Convert integer to string
            int l = 0, r = s.length() - 1;   // Initialize two pointers at start and end

            // Move pointers towards middle while characters match
            while (l < r) {
                  if (s.charAt(l++) != s.charAt(r--)) {
                        return false;   // Mismatch found, not a palindrome
                  }
            }

            return true;   // All matched, it is a palindrome
      }
}
