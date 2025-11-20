#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L5 Q1

# ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

class Solution:
      def projectionArea(self, grid: List[List[int]]) -> int:
            res = 0        # Initialize total projection area
            n = len(grid)  # Grid size (assuming square grid)

            # Iterate through each row and column
            for i in range(n):
                  max_row = 0  # Max height in current row (for ZX plane)
                  max_col = 0  # Max height in current column (for YZ plane)

                  for j in range(n):
                        # Count cells with height > 0 for the XY (top) projection
                        if grid[i][j] > 0:
                              res += 1
                        # Track max height in row i
                        if grid[i][j] > max_row:
                              max_row = grid[i][j]
                        # Track max height in column i
                        if grid[j][i] > max_col:
                              max_col = grid[j][i]

                  # Add max heights for current row and column to the total
                  res += max_row + max_col

            return res  # Return total projection area of the 3D shape
