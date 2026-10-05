//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 856

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int scoreOfParentheses(String s) {
            int depth = 0;
            int score = 0;

            for (int i = 0; i < s.length(); i++) {
                  // Increment depth for each '('
                  if (s.charAt(i) == '(') {
                        depth++;
                  } else {
                        // Decrement depth for each ')'
                        depth--;

                        // When reaching an immediate "()", add 2^depth to the score
                        if (s.charAt(i - 1) == '(') {
                              score += (1 << depth);
                        }
                  }
            }

            return score;
      }
}