#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2503

#? ⌚ Time complexity ➺ O(q log q + (n * m)log(n * m)) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n * m) 👉🏻 q = len(queries) 👉🏻  m = len(grid[0])

from typing import List
from heapq import heappop, heappush

class Solution:
      def maxPoints(self, grid: List[List[int]], queries: List[int]) -> List[int]:
            ROWS, COLS = len(grid), len(grid[0])  # Get grid dimensions

            # Store queries along with their original index, then sort by query value
            q = [(n, i) for i, n in enumerate(queries)]
            q.sort()  # Sorting ensures we process queries in increasing order

            # Min-heap to process grid cells in increasing order of values
            min_heap = [(grid[0][0], 0, 0)]  # Stores (cell_value, row, col)

            # Result array to store answers for each query
            res = [0] * len(queries)

            # Set to track visited cells
            visit = set([(0, 0)])

            points = 0  # Tracks how many cells we can reach

            # Process each query
            for limit, idx in q:
                  # Expand reachable cells while the smallest value is below the current query
                  while min_heap and min_heap[0][0] < limit:
                        val, r, c = heappop(min_heap)  # Get cell with smallest value
                        points += 1  # Increment count of reachable points

                        # Define neighboring cells (Up, Down, Left, Right)
                        neighbors = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                        for nr, nc in neighbors:
                              # Check if within bounds and not visited
                              if 0 <= nr < ROWS and 0 <= nc < COLS and (nr, nc) not in visit:
                                    heappush(min_heap, (grid[nr][nc], nr, nc))  # Add to heap
                                    visit.add((nr, nc))  # Mark as visited

                  # Store the number of reachable cells for the current query
                  res[idx] = points

            return res  # Return the result list
