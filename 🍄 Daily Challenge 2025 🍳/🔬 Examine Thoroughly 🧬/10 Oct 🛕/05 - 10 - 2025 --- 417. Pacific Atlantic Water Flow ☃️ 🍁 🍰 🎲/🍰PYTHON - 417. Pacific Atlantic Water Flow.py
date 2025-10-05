#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 417

#? ⌚ Time complexity ➺ O(m * n)

#? 🧺 Space complexity ➺ O(m * n)

from typing import List 

class Solution:
      def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
            ROWS, COLS = len(heights), len(heights[0])

            pac, atl = set(), set()  # Cells reachable from Pacific and Atlantic oceans

            # ----------------------------------------------------------
            # DFS function to mark reachable cells from a given ocean
            # ----------------------------------------------------------
            def dfs(r, c, visit, prevHeight):
                  # Check boundaries, visited set, and non-decreasing height condition
                  if (r < 0 or c < 0 or r == ROWS or c == COLS or
                        (r, c) in visit or heights[r][c] < prevHeight):
                        return

                  visit.add((r, c))

                  # DFS in 4 directions
                  dfs(r + 1, c, visit, heights[r][c])
                  dfs(r - 1, c, visit, heights[r][c])
                  dfs(r, c + 1, visit, heights[r][c])
                  dfs(r, c - 1, visit, heights[r][c])

            # ----------------------------------------------------------
            # Step 1: DFS from Pacific (top row, left col) and Atlantic (bottom row, right col)
            # ----------------------------------------------------------
            for c in range(COLS):
                  dfs(0, c, pac, heights[0][c])            # Top row → Pacific
                  dfs(ROWS - 1, c, atl, heights[ROWS - 1][c])  # Bottom row → Atlantic

            for r in range(ROWS):
                  dfs(r, 0, pac, heights[r][0])            # Left col → Pacific
                  dfs(r, COLS - 1, atl, heights[r][COLS - 1])  # Right col → Atlantic

            # ----------------------------------------------------------
            # Step 2: Intersection of Pacific and Atlantic reachable cells
            # ----------------------------------------------------------
            res = []
            for r in range(ROWS):
                  for c in range(COLS):
                        if (r, c) in pac and (r, c) in atl:
                              res.append([r, c])

            return res
