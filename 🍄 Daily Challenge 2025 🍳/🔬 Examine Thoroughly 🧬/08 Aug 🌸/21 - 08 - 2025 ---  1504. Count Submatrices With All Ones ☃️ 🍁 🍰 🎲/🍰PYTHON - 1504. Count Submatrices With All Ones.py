#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1504

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List 

class Solution:
      def numSubmat(self, mat: List[List[int]]) -> int:
            # heights[i] stores the current histogram height of consecutive 1s in column i up to this row
            heights = [0] * len(mat[0])
            # res accumulates the total number of all-1 submatrices
            res = 0

            for row in mat:
                  # Update histogram: increase height if current cell is 1, else reset to 0
                  for i, x in enumerate(row):
                        heights[i] = 0 if x == 0 else heights[i] + 1

                  # Monotonic increasing stack of [index j, cumulative count up to j, height at j]
                  # Sentinel: index -1, cumulative 0, height -1 (ensures first real height pops never remove it)
                  stack = [[-1, 0, -1]]

                  # For each column, compute number of all-1 submatrices ending at this row with right boundary i
                  for i, h in enumerate(heights):
                        # Maintain increasing heights: pop while last height >= current height
                        # This ensures top of stack has height strictly less than h
                        while stack[-1][2] >= h:
                              stack.pop()

                        # j is index of previous smaller height; prev is cumulative count up to j
                        j, prev, _ = stack[-1]

                        # cur counts new submatrices with bottom-right corner in this row and right edge at i
                        # (i - j) choices for left boundary times height h, plus previously accumulated 'prev'
                        cur = prev + (i - j) * h

                        # Push current state for future columns
                        stack.append([i, cur, h])

                        # Add current contribution to result
                        res += cur
            # Return total number of all-1 submatrices
            return res
