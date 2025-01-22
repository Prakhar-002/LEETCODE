#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1765

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

#? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(mat[0])

#* MultiSource BFS

from collections import deque

class Solution:
      def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
            # Get the number of rows and columns in the grid
            ROWS, COLS = len(mat), len(mat[0])

            # Initialize a deque to perform BFS (queue to store coordinates)
            q = deque()  # (r, c)

            # Initialize the result grid with -1 to indicate unvisited cells
            distances = [[-1] * COLS for _ in range(ROWS)]

            # Iterate through the grid to find cells with zeroes
            for r in range(ROWS):
                  for c in range(COLS):
                        if mat[r][c] == 0:  # If the current cell is a 0
                              q.append((r, c))  # Add it to the queue
                              distances[r][c] = 0  # Cells with 0 have a distance of 0

            # Directions for neighbors: up, down, left, right
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

            # Perform Breadth-First Search (BFS) to calculate the distance to the nearest 0
            while q:
                  # Dequeue the front cell
                  r, c = q.popleft()

                  # Get the current distance of the cell (this represents the distance to the nearest 0)
                  current_distance = distances[r][c]

                  # Process each neighbor
                  for dr, dc in directions:
                        nr, nc = r + dr, c + dc

                        # Check if the neighbor is within bounds and unvisited
                        if nr >= 0 and nr < ROWS and nc >= 0 and nc < COLS and distances[nr][nc] == -1:
                              q.append((nr, nc))  # Add the neighbor to the queue to process later
                              distances[nr][nc] = current_distance + 1  # Set the neighbor's distance

            # Return the final grid of distances
            return distances
