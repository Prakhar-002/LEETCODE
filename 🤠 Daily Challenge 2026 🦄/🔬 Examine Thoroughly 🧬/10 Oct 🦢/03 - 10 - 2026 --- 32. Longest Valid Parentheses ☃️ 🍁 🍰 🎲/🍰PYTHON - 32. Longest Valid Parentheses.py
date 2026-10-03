#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 22

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestValidParentheses(self, s: str) -> int:
            n = len(s)
            open_cnt = close_cnt = 0
            result = 0

            # Pass 1: Traverse left-to-right
            for i in range(n):
                  if s[i] == '(':
                        open_cnt += 1
                  else:
                        close_cnt += 1

                  # If counts match, we found a valid prefix window
                  if open_cnt == close_cnt:
                        result = max(result, open_cnt + close_cnt)
                  # If closing brackets exceed opening brackets, substring is invalid
                  elif close_cnt > open_cnt:
                        open_cnt = 0
                        close_cnt = 0

            # Reset counters for reverse pass
            open_cnt = 0
            close_cnt = 0

            # Pass 2: Traverse right-to-left
            for i in range(n - 1, -1, -1):
                  if s[i] == '(':
                        open_cnt += 1
                  else:
                        close_cnt += 1

                  # If counts match, we found a valid suffix window
                  if open_cnt == close_cnt:
                        result = max(result, open_cnt + close_cnt)
                  # If opening brackets exceed closing brackets, substring is invalid
                  elif open_cnt > close_cnt:
                        open_cnt = 0
                        close_cnt = 0

            return result