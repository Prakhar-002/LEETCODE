#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 407

#? ⌚ Time complexity ➺ O(m * n log(m * n)) 👉🏻  m = len(heightMap)

#? 🧺 Space complexity ➺ O(m * n)           👉🏻  n = len(heightMap[0])

from heapq import heappush, heappop
from typing import List

class Solution:
      def trapRainWater(self, heightMap: List[List[int]]) -> int:
            # Get the number of rows and columns in the heightMap
            ROWS, COLS = len(heightMap), len(heightMap[0])

            # Min-heap to store the boundary cells
            min_heap = []

            # Add all boundary cells to the heap and mark them as visited
            for r in range(ROWS):
                  for c in range(COLS):
                        # If the cell is on the boundary (edges of the matrix)
                        if r in [0, ROWS - 1] or c in [0, COLS - 1]:
                              heappush(min_heap, (heightMap[r][c], r, c))  # Push the cell's height and coordinates
                              heightMap[r][c] = -1  # Mark the cell as visited

            res = 0  # Initialize the result to store the total trapped water
            max_h = -1  # Track the maximum height encountered so far

            # Process the cells in the heap
            while min_heap:
                  h, r, c = heappop(min_heap)  # Pop the smallest height from the heap
                  max_h = max(max_h, h)  # Update the maximum height encountered so far
                  res += max_h - h  # Add the trapped water at this cell to the result

                  # List of neighboring cells (up, down, left, right)
                  nei = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                  # Process each neighbor
                  for nr, nc in nei:
                        # Check if the neighbor is within bounds and hasn't been visited
                        if (
                              nr < 0 
                              or nc < 0 
                              or nr == ROWS 
                              or nc == COLS 
                              or heightMap[nr][nc] == -1
                        ):
                              continue  # Skip invalid or already visited neighbors

                        # Push the neighbor's height and coordinates to the heap
                        heappush(min_heap, (heightMap[nr][nc], nr, nc))
                        heightMap[nr][nc] = -1  # Mark the neighbor as visited

            return res  # Return the total trapped water
