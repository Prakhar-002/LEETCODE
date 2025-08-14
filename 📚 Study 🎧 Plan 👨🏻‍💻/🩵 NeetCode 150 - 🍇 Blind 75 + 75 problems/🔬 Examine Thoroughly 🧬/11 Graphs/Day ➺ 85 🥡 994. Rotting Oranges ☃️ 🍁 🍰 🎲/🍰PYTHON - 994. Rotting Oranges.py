#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 994

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * m)

from typing import List
from collections import deque

class Solution:
      def orangesRotting(self, grid: List[List[int]]) -> int:
            ROWS, COLS = len(grid), len(grid[0])  # Dimensions of the grid

            q = deque()    # Queue for BFS, stores positions of rotten oranges
            fresh = 0      # Count of fresh oranges at the start
            time = 0       # Minutes elapsed

            # ----------------------------------------------------------
            # Step 1: Initialize the queue with all initially rotten oranges,
            #         and count the number of fresh oranges.
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        if grid[r][c] == 1:
                              fresh += 1
                        if grid[r][c] == 2:
                              q.append([r, c])

            # Directions for adjacent cells (right, left, down, up)
            directions = [[0, 1], [0, -1], [1, 0], [-1, 0]]

            # ----------------------------------------------------------
            # Step 2: Perform BFS to rot all reachable fresh oranges.
            #         Each "layer" of BFS is 1 minute.
            # ----------------------------------------------------------
            while q and fresh > 0:
                  for _ in range(len(q)):
                        r, c = q.popleft()

                        # Explore all 4 adjacent cells
                        for dr, dc in directions:
                              row, col = r + dr, c + dc

                              # Skip if out of bounds or not a fresh orange
                              if (row < 0 or row == ROWS or
                                    col < 0 or col == COLS or
                                    grid[row][col] != 1):
                                    continue

                              # Rot this fresh orange, enqueue it
                              grid[row][col] = 2
                              q.append([row, col])
                              fresh -= 1

                  # After one layer, increment time (1 minute passed)
                  time += 1

            # If there are still fresh oranges, return -1. Otherwise, return minutes elapsed.
            return time if fresh == 0 else -1
