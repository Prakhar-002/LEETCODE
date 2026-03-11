#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 200

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * m)

from typing import List
from collections import deque 

class Solution:
      def numIslands(self, grid: List[List[str]]) -> int:
            # Possible movement directions: down, up, right, left
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            ROWS, COLS = len(grid), len(grid[0])
            islands = 0  # Count of islands found

            # ----------------------------------------------------------
            # BFS to traverse all connected land cells starting at (r, c)
            # ----------------------------------------------------------
            def bfs(r, c):
                  q = deque()
                  grid[r][c] = '0'  # Mark as visited by setting to '0'
                  q.append((r, c))

                  while q:
                        row, col = q.popleft()
                        # Explore all four directions
                        for dr, dc in directions:
                              nr, nc = row + dr, col + dc
                              # Skip if out of bounds or water
                              if (nr < 0 or nc < 0 or nr >= ROWS or
                                    nc >= COLS or grid[nr][nc] == "0"
                              ):
                                    continue
                              # Add neighbor to queue & mark visited
                              q.append((nr, nc))
                              grid[nr][nc] = '0'

            # ----------------------------------------------------------
            # Scan the whole grid
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        # Found land → perform BFS to mark entire island
                        if grid[r][c] == '1':
                              bfs(r, c)
                              islands += 1

            return islands
