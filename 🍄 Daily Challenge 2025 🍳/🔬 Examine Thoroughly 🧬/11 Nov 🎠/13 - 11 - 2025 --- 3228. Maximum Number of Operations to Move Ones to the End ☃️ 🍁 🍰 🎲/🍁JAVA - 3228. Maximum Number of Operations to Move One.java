//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3228

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maxOperations(String s) {
            int opr = 0; // Total count of operations
            int ones = 0; // Count of '1's encountered so far

            // Iterate through string except the last character
            for (int i = 0; i < s.length() - 1; i++) {
                  if (s.charAt(i) == '1') {
                        ones++; // Increment count of '1's

                        // If next character is '0', add current ones count to operations
                        if (s.charAt(i + 1) == '0') {
                              opr += ones;
                        }
                  }
            }

            return opr; // Return total number of operations
      }
}
