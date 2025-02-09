//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 125 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Function to check if a given string is a palindrome
      public boolean isPalindrome(String s) {
            // Initialize two pointers: left (l) at the start, right (r) at the end of the
            // string
            int l = 0, r = s.length() - 1;

            // Iterate until the two pointers meet
            while (l < r) {
                  // Move the left pointer forward if it's not an alphanumeric character
                  while (l < r && !Character.isLetterOrDigit(s.charAt(l))) {
                        l++;
                  }

                  // Move the right pointer backward if it's not an alphanumeric character
                  while (r > l && !Character.isLetterOrDigit(s.charAt(r))) {
                        r--;
                  }

                  // Compare the characters (ignoring case); return false if they don't match
                  if (Character.toLowerCase(s.charAt(l)) != Character.toLowerCase(s.charAt(r))) {
                        return false;
                  }

                  // Move both pointers towards the center
                  l++;
                  r--;
            }

            // If all checks pass, return true
            return true;
      }
}
