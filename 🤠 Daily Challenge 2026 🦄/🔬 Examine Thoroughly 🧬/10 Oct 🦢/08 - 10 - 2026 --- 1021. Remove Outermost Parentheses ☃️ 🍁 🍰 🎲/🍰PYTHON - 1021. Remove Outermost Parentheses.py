#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1021

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def removeOuterParentheses(self, s: str) -> str:
            open_cnt = close_cnt = 0 
            res = []

            for ch in s:
                  # If opening a brand new primitive block, skip appending the outermost '('
                  if open_cnt == close_cnt and ch == '(':
                        open_cnt += 1
                        continue

                  # Update parenthesis counters
                  if ch == '(':
                        open_cnt += 1
                  else:
                        close_cnt += 1

                  # If closing the outermost primitive block, skip appending the outermost ')'
                  if open_cnt == close_cnt and ch == ')':
                        continue

                  # Character belongs inside a primitive block
                  res.append(ch)

            return "".join(res)