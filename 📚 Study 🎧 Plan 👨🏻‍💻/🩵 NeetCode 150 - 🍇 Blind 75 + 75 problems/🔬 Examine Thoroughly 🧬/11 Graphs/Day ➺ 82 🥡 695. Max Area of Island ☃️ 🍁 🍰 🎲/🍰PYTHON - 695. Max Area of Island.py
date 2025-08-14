#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 695

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(n * m)

from typing import List

class Solution:
      def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
            ROWS, COLS = len(grid), len(grid[0])  # Grid dimensions

            # ----------------------------------------------------------
            # DFS function to compute area of an island starting at (r, c)
            # ----------------------------------------------------------
            def dfs(r, c):
                  # Boundary or water check
                  if r < 0 or r == ROWS or c < 0 or c == COLS or grid[r][c] == 0:
                        return 0

                  # Mark cell as visited by setting it to 0
                  grid[r][c] = 0

                  # Count this cell + DFS in 4 directions
                  return (1 +
                              dfs(r + 1, c) +
                              dfs(r - 1, c) +
                              dfs(r, c + 1) +
                              dfs(r, c - 1))

            area = 0  # Maximum area found so far

            # ----------------------------------------------------------
            # Scan entire grid and run DFS for each unvisited land cell
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        area = max(area, dfs(r, c))

            return area
