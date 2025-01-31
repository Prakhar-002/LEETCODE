#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 827

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n ^ 2)

class Solution:
      def largestIsland(self, grid: List[List[int]]) -> int:
            # Get the size of the grid (NxN)
            N = len(grid)

            # Function to check if a cell is out of bounds
            def out_of_bound(r, c):
                  return (
                        r < 0 or c < 0 or  # If row or column index is less than 0
                        r == N or c == N   # If row or column index equals N (outside grid)
                  )

            # Depth-First Search (DFS) to label each island and calculate its size
            def dfs(r, c, label):
                  # Base case: if cell is out of bounds or not land (value != 1)
                  if (out_of_bound(r, c) or grid[r][c] != 1):
                        return 0

                  # Label the current cell with the island's unique label
                  grid[r][c] = label

                  # Initialize the size of this island (current cell counts as 1)
                  size = 1

                  # Define the four possible neighbors (up, down, left, right)
                  neighbors = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]

                  # Recursively calculate the size of the connected island
                  for nr, nc in neighbors:
                        size += dfs(nr, nc, label)

                  return size

            # Dictionary to store the size of islands keyed by their label
            size = defaultdict(int)
            label = 2  # Start labeling islands from 2 (to distinguish from land 1)

            # First pass: Label all islands and calculate their sizes
            for r in range(N):
                  for c in range(N):
                        if grid[r][c] == 1:  # If the cell is part of an unvisited island
                              size[label] = dfs(r, c, label)  # Label and calculate size
                              label += 1  # Move to the next label for the next island

            # Function to calculate the potential size of an island by connecting water
            def connect(r, c):
                  # Define the four possible neighbors
                  neighbors = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]
                  
                  # Set to track visited island labels
                  visited = set()

                  # Start with a size of 1 (the flipped water cell)
                  connected_island = 1

                  # Check each neighbor
                  for nr, nc in neighbors:
                        if (not out_of_bound(nr, nc) and  # Neighbor is within bounds
                              grid[nr][nc] not in visited):  # Island not yet counted
                              connected_island += size[grid[nr][nc]]  # Add island size
                              visited.add(grid[nr][nc])  # Mark island as visited

                  return connected_island

            # Get the size of the largest island from the precomputed sizes
            island = 0 if not size else max(size.values())

            # Second pass: Try flipping each water cell (0) to land (1)
            for r in range(N):
                  for c in range(N):
                        if grid[r][c] == 0:  # If the cell is water
                              # Calculate the potential size of the island
                              island = max(island, connect(r, c))

            return island
