#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3446

#? ⌚ Time complexity ➺ O(n^2 log n) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def sortMatrix(self, grid: List[List[int]]) -> List[List[int]]:
            n = len(grid)  # Size of the square matrix

            # Sort bottom-left diagonals (including main diagonal) in DESCENDING order
            for i in range(n):
                  # Collect elements along the current diagonal starting at (i, 0)
                  tmp = [grid[i + j][j] for j in range(n - i)]
                  tmp.sort(reverse=True)  # Sort diagonal in descending order

                  # Place sorted elements back into their diagonal positions
                  for j in range(n - i):
                        grid[i + j][j] = tmp[j]

            # Sort top-right diagonals (excluding main diagonal) in ASCENDING order
            for j in range(1, n):
                  # Collect elements along diagonal starting at (0, j)
                  tmp = [grid[i][j + i] for i in range(n - j)]
                  tmp.sort()  # Sort diagonal in ascending order

                  # Place sorted elements back into their diagonal positions
                  for i in range(n - j):
                        grid[i][j + i] = tmp[i]

            # Return the modified grid after all diagonals have been sorted
            return grid
