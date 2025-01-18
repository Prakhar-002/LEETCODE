#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2290

#? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

from collections import deque
from typing import List

class Solution:
      def minimumObstacles(self, grid: List[List[int]]) -> int:
            # Get the number of rows and columns in the grid
            ROWS, COLS = len(grid), len(grid[0])

            # Initialize a deque for BFS. Each entry is a tuple (obstacles, row, col),
            # where 'obstacles' represents the number of obstacles encountered so far.
            q = deque([(0, 0, 0)])  # Start with no obstacles at (0, 0)

            # Keep track of visited cells to avoid revisiting
            visit = set([(0, 0)])

            # Perform BFS
            while q:
                  # Dequeue the current cell
                  obstacles, r, c = q.popleft()

                  # If we reach the bottom-right corner, return the number of obstacles
                  if (r, c) == (ROWS - 1, COLS - 1):
                        return obstacles

                  # Define the neighbors (down, up, right, left)
                  nei = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                  # Iterate through each neighbor
                  for nr, nc in nei:
                        # Check if the neighbor is out of bounds or already visited
                        if (nr, nc) in visit or nr < 0 or nc < 0 or nr == ROWS or nc == COLS:
                              continue

                        # If the neighbor is an obstacle, increment the obstacle count
                        if grid[nr][nc]:
                              q.append((obstacles + 1, nr, nc))
                        # If the neighbor is not an obstacle, add it to the front of the deque
                        else:
                              q.appendleft((obstacles, nr, nc))
                        
                        # Mark the neighbor as visited
                        visit.add((nr, nc))

            # If the function reaches here, it means there's no valid path
            return -1
