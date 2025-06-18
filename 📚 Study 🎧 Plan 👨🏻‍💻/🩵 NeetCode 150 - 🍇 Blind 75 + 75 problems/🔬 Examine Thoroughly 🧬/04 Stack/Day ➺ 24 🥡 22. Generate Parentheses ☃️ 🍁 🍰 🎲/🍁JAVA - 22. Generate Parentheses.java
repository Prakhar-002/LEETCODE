//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(4 ^ n / √n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<String> generateParenthesis(int n) {
            List<String> res = new ArrayList<>(); // Stores all valid combinations
            StringBuilder stack = new StringBuilder(); // Acts as a temporary stack for parentheses

            // Recursive function to backtrack and build valid sequences
            backtrack(0, 0, n, stack, res);
            return res;
      }

      private void backtrack(int open, int close, int n, StringBuilder stack, List<String> res) {
            // Base case: when open and close parentheses both reach 'n'
            if (open == n && close == n) {
                  res.add(stack.toString());
                  return;
            }

            // Add an opening parenthesis if still allowed
            if (open < n) {
                  stack.append('(');
                  backtrack(open + 1, close, n, stack, res);
                  stack.deleteCharAt(stack.length() - 1); // Backtrack
            }

            // Add a closing parenthesis if it's valid
            if (close < open) {
                  stack.append(')');
                  backtrack(open, close + 1, n, stack, res);
                  stack.deleteCharAt(stack.length() - 1); // Backtrack
            }
      }
}
