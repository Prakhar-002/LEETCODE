#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 856

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def scoreOfParentheses(self, s: str) -> int:
            depth = 0
            score = 0

            for i in range(len(s)):
                  # Increment nesting depth when encountering an opening bracket
                  if s[i] == '(':
                        depth += 1
                  else:
                        # Decrement nesting depth when closing a bracket
                        depth -= 1

                        # If the closing bracket immediately follows an opening bracket,
                        # it represents an innermost "()" worth 2^depth
                        if s[i - 1] == '(':
                              score += (1 << depth)

            return score