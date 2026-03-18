#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 85

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(matrix), n = len(matrix[0])

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def maximalRectangle(self, matrix: List[List[str]]) -> int:
            # Edge case: empty matrix
            if not matrix or not matrix[0]:
                  return 0

            rows, cols = len(matrix), len(matrix[0])
            max_area   = 0

            # heights[i] = consecutive 1s ending at current row in column i
            # Extra sentinel 0 at end forces stack to flush at row end
            heights = [0] * (cols + 1)

            for row in matrix:

                  # ---------- Step 1: update histogram heights ----------
                  for i in range(cols):
                        heights[i] = heights[i] + 1 if row[i] == "1" else 0

                  # ---------- Step 2: largest rectangle in histogram ----------
                  # Monotonic stack stores indices of increasing heights
                  stack = [-1]    # Sentinel index for left boundary

                  for i in range(len(heights)):
                        # Pop while current height breaks increasing order
                        while heights[i] < heights[stack[-1]]:
                              h        = heights[stack.pop()]    # Height of popped bar
                              w        = i - stack[-1] - 1      # Width between boundaries
                              max_area = max(max_area, h * w)
                        stack.append(i)

            return max_area