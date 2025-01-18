#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1368

#? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

from collections import deque
from typing import List

class Solution:
      def minCost(self, grid: List[List[int]]) -> int:
            # Mapping the directions to their respective deltas:
            # 1: Right, 2: Left, 3: Down, 4: Up
            direction = {
                  1: [0, 1],   # Move right
                  2: [0, -1],  # Move left
                  3: [1, 0],   # Move down
                  4: [-1, 0]   # Move up
            }

            # Number of rows and columns in the grid
            ROWS, COLS = len(grid), len(grid[0])

            # Deque for BFS; stores tuples of (row, col, cost)
            q = deque([(0, 0, 0)])  # Start at top-left corner (0, 0) with 0 cost

            # Dictionary to store the minimum cost to reach each cell
            min_cost = {(0, 0): 0}

            # Perform BFS
            while q:
                  # Pop the current cell from the deque
                  r, c, cost = q.popleft()

                  # If we reach the bottom-right corner, return the minimum cost
                  if (r, c) == (ROWS - 1, COLS - 1):
                        return cost

                  # Explore all possible directions
                  for d in direction:
                        # Calculate the new row and column based on the direction
                        dr, dc = direction[d]
                        nr, nc = r + dr, c + dc

                        # Determine the new cost
                        # If the current direction matches the grid's direction, no extra cost
                        # Otherwise, add 1 to the cost
                        n_cost = cost if d == grid[r][c] else cost + 1

                        # Skip if the neighbor is out of bounds or if the new cost is not optimal
                        if (nr < 0 or nc < 0 or  # Out of bounds
                              nr == ROWS or nc == COLS or  # Out of bounds
                              n_cost >= min_cost.get((nr, nc), float("inf"))):  # Not an optimal cost
                              continue

                        # Update the minimum cost to reach the neighbor
                        min_cost[(nr, nc)] = n_cost

                        # Add the neighbor to the deque
                        # If no extra cost, prioritize by adding to the left of the deque
                        if d == grid[r][c]:
                              q.appendleft((nr, nc, n_cost))
                        else:
                              q.append((nr, nc, n_cost))
