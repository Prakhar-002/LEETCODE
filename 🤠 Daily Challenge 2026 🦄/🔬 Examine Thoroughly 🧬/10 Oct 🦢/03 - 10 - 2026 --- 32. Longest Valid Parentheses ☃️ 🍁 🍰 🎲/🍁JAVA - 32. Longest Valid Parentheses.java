//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int longestValidParentheses(String s) {
            int n = s.length();
            int open = 0;
            int close = 0;
            int result = 0;

            // Pass 1: Scan from left to right
            for (int i = 0; i < n; i++) {
                  if (s.charAt(i) == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Valid balanced window
                  if (open == close) {
                        result = Math.max(result, open + close);
                  }
                  // More close brackets than open brackets invalidates the sequence
                  else if (close > open) {
                        open = 0;
                        close = 0;
                  }
            }

            // Reset counters for the right-to-left scan
            open = 0;
            close = 0;

            // Pass 2: Scan from right to left to catch unclosed open brackets (e.g., "(()")
            for (int i = n - 1; i >= 0; i--) {
                  if (s.charAt(i) == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Valid balanced window
                  if (open == close) {
                        result = Math.max(result, open + close);
                  }
                  // More open brackets than close brackets invalidates the sequence
                  else if (open > close) {
                        open = 0;
                        close = 0;
                  }
            }

            return result;
      }
}