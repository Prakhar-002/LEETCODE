#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2536

# ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n ^ 2)

class Solution:
      def rangeAddQueries(self, n: int, queries: List[List[int]]) -> List[List[int]]:
            # Initialize a difference matrix (n+1 by n+1) to efficiently perform range updates
            diff = [[0] * (n + 1) for _ in range(n + 1)]

            # Apply the 2D difference array technique for each rectangular query
            for row1, col1, row2, col2 in queries:
                  diff[row1][col1] += 1  # Start increment area
                  diff[row2 + 1][col1] -= 1  # End increment after bottom edge
                  diff[row1][col2 + 1] -= 1  # End increment after right edge
                  diff[row2 + 1][col2 + 1] += 1  # Restore increment at bottom-right corner

            # Build the result matrix from the difference matrix using prefix sums
            mat = [[0] * n for _ in range(n)]
            for i in range(n):
                  for j in range(n):
                        x1 = 0 if i == 0 else mat[i - 1][j]  # Sum from the previous row
                        x2 = 0 if j == 0 else mat[i][j - 1]  # Sum from the previous column
                        x3 = 0 if i == 0 or j == 0 else mat[i - 1][j - 1]  # Overlap area
                        mat[i][j] = (
                              diff[i][j] + x1 + x2 - x3
                        )  # Inclusion-exclusion for prefix sum

            return mat  # The final matrix after applying all range additions
