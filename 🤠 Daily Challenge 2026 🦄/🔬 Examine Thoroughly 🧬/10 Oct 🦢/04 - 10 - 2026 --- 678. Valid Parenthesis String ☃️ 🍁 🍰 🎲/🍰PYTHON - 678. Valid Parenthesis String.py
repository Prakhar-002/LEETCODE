#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 678

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def checkValidString(self, s: str) -> bool:
            open_count = 0
            close_count = 0

            # Left-to-right pass: treat '*' as '(' to maximize possible open brackets
            for ch in s:
                  if ch == '(' or ch == '*':
                        open_count += 1
                  else:
                        open_count -= 1

                  # If open_count drops below 0, there are too many ')' to ever match
                  if open_count < 0:
                        return False

            # Right-to-left pass: treat '*' as ')' to maximize possible close brackets
            for ch in reversed(s):
                  if ch == ')' or ch == '*':
                        close_count += 1
                  else:
                        close_count -= 1

                  # If close_count drops below 0, there are too many '(' to ever match
                  if close_count < 0:
                        return False

            return True