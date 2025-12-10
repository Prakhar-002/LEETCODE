#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1765

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(isWater)

#? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(isWater[0])

#* MultiSource BFS

from collections import deque

class Solution:
      def highestPeak(self, isWater: List[List[int]]) -> List[List[int]]:
            # Get the number of rows and columns in the grid
            ROWS, COLS = len(isWater), len(isWater[0])

            # Initialize a deque to perform BFS (queue to store coordinates)
            q = deque()  # (r, c)

            # Initialize the result grid with -1 to indicate unvisited cells
            heights = [[-1] * COLS for _ in range(ROWS)]

            # Iterate through the grid to find water cells
            for r in range(ROWS):
                  for c in range(COLS):
                        if isWater[r][c]:  # If the current cell is water
                              q.append((r, c))  # Add it to the queue
                              heights[r][c] = 0    # Water cells have a height of 0

            # Perform Breadth-First Search (BFS) to calculate the heights
            while q:
                  # Dequeue the front cell
                  r, c = q.popleft()

                  # Get the current height of the cell
                  height = heights[r][c]

                  # Define the neighbors (up, down, left, right)
                  nei = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                  # Process each neighbor
                  for nr, nc in nei:
                        # Check if the neighbor is within bounds and unvisited
                        if (nr < 0 
                              or nr == ROWS
                              or nc < 0 
                              or nc == COLS 
                              or heights[nr][nc] != -1):
                              continue  # Skip invalid neighbors

                        # Update the neighbor's height
                        q.append((nr, nc))  # Add neighbor to the queue
                        heights[nr][nc] = height + 1  # Set its height

            # Return the final height grid
            return heights