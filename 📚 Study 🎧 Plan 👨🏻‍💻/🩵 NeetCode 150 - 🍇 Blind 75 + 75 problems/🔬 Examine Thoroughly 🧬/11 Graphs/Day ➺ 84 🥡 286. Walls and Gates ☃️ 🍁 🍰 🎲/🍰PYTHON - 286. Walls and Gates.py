#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 286

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m * n)

from collections import deque
from typing import List 

class Solution:
      def islandsAndTreasure(self, grid: List[List[int]]) -> None:
            ROWS, COLS = len(grid), len(grid[0])
            visit = set()   # Tracks visited cells
            q = deque()     # BFS queue

            # ----------------------------------------------------------
            # Helper function to add a cell to BFS if it is valid and unvisited
            # ----------------------------------------------------------
            def addRoom(r, c):
                  # Skip if out of bounds, visited, or a wall
                  if (r < 0 or c < 0 or r == ROWS or c == COLS or
                        (r, c) in visit or grid[r][c] == -1):
                        return
                  # Mark as visited and enqueue
                  visit.add((r, c))
                  q.append([r, c])

            # ----------------------------------------------------------
            # Step 1: Add all gates (0) as BFS starting points
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        if grid[r][c] == 0:
                              q.append([r, c])
                              visit.add((r, c))

            dist = 0  # Distance from gates

            # ----------------------------------------------------------
            # Step 2: BFS from all gates simultaneously
            # ----------------------------------------------------------
            while q:
                  # Process all nodes for the current distance level
                  for _ in range(len(q)):
                        r, c = q.popleft()

                        # Update the room's distance
                        grid[r][c] = dist

                        # Add all 4 neighbors
                        addRoom(r + 1, c)
                        addRoom(r - 1, c)
                        addRoom(r, c + 1)
                        addRoom(r, c - 1)
                  # Move to the next distance level
                  dist += 1
