#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2658

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Rows

#? 🧺 Space complexity ➺ O(n * m)   ->  m = No. of Cols

from typing import List

class Solution:
      def findMaxFish(self, grid: List[List[int]]) -> int:
            # Depth-First Search (DFS) helper function to explore the connected cells
            def dfs(r, c):
                  # Base case: check if the current cell is out of bounds, water (0), or already visited
                  if (r < 0 or c < 0 or 
                        r == ROWS or c == COLS or
                        grid[r][c] == 0 or visited[r][c]):
                        return 0

                  # Mark the current cell as visited
                  visited[r][c] = True

                  # Start counting fish from the current cell
                  max_fish_count = grid[r][c]

                  # Define the four possible directions (up, down, left, right)
                  neighbors = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                  # Recursively explore all valid neighbors
                  for nr, nc in neighbors:
                        max_fish_count += dfs(nr, nc)

                  # Return the total fish count for this connected component
                  return max_fish_count 

            # Get the dimensions of the grid
            ROWS, COLS = len(grid), len(grid[0])

            # Variable to track the maximum number of fish
            max_fish_count = 0

            # Create a visited matrix to keep track of explored cells
            visited = [[False] * COLS for _ in range(ROWS)]

            # Iterate over each cell in the grid
            for r in range(ROWS):
                  for c in range(COLS):
                        # Start a DFS if the cell contains fish and is not yet visited
                        if grid[r][c] and not visited[r][c]:
                              max_fish_count = max(max_fish_count, dfs(r, c))

            # Return the maximum number of fish in any connected component
            return max_fish_count
