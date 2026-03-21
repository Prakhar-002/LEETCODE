#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3643

#? ⌚ Time complexity ➺ O(k ^ 2) 

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def reverseSubmatrix(
            self, grid: List[List[int]], x: int, y: int, k: int
      ) -> List[List[int]]:
            t = x            # Top row pointer starting at x
            b = x + k - 1   # Bottom row pointer starting at x+k-1

            # ---------- Swap rows from outside in until pointers meet ----------
            while t < b:

                  # Swap each element column by column within [y, y+k) range
                  for i in range(y, y + k):
                        grid[t][i], grid[b][i] = grid[b][i], grid[t][i]

                  # Move pointers inward
                  t += 1
                  b -= 1

            return grid