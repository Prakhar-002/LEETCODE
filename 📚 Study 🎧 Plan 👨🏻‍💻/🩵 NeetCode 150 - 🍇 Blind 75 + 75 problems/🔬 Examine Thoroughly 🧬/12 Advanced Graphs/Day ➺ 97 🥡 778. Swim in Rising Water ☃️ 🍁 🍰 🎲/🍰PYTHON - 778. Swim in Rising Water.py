#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 778

#? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

import heapq
from typing import List 

class Solution:
      def swimInWater(self, grid: List[List[int]]) -> int:
            # ----------------------------------------------------------
            # Step 1: Initialization
            # ----------------------------------------------------------
            N = len(grid)
            # Min-heap stores [time, row, col]. `time` is the max elevation on the path so far.
            minH = [[grid[0][0], 0, 0]]
            # `visit` tracks visited (r, c) cells to prevent cycles.
            visit = set([(0, 0)])
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

            # ----------------------------------------------------------
            # Step 2: Dijkstra's Algorithm Search
            # ----------------------------------------------------------
            # Process cells from the priority queue until empty.
            while minH:
                  # Get the cell reachable with the minimum time `t` so far.
                  t, r, c = heapq.heappop(minH)

                  # If we reached the destination, `t` is the minimum required time.
                  if r == N - 1 and c == N - 1:
                        return t

                  # Explore all valid neighbors.
                  for dr, dc in directions:
                        nr, nc = r + dr, c + dc

                        # Skip if neighbor is out of bounds or already visited.
                        if (nr < 0 or nc < 0 or nr == N or nc == N
                              or (nr, nc) in visit):
                              continue

                        visit.add((nr, nc))
                        # The time for the new path is the max of the current path's time
                        # and the elevation of the new cell.
                        new_time = max(t, grid[nr][nc])

                        # Add the new cell to the heap to be explored.
                        heapq.heappush(minH, [new_time, nr, nc])
