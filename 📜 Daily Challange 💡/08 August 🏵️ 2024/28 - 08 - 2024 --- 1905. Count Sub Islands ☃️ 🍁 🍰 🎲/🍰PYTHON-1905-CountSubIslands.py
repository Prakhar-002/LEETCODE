#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1905

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m is the number of rows and n is the number of columns

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countSubIslands(self, grid1: List[List[int]], grid2: List[List[int]]) -> int:
            self.m = len(grid1)  # Number of rows in the grid
            self.n = len(grid1[0])  # Number of columns in the grid
            self.isSubIsland = True  # Flag to track if the current island in grid2 is a sub-island of grid1
            subIslandCount = 0  # To store the count of sub-islands

            def dfs(i: int, j: int) -> None:
                  # If the current position is out of bounds or already visited (grid2[i][j] == 0), return
                  if i < 0 or i == self.m or j < 0 or j == self.n or grid2[i][j] == 0:
                        return

                  # If the current cell in grid2 is land but not in grid1, mark this island as not a sub-island
                  if grid1[i][j] != grid2[i][j]:
                        self.isSubIsland = False

                  # Mark the current cell as visited by setting grid2[i][j] to 0
                  grid2[i][j] = 0

                  # Continue the DFS in all four directions
                  dfs(i + 1, j)  # Down
                  dfs(i - 1, j)  # Up
                  dfs(i, j + 1)  # Right
                  dfs(i, j - 1)  # Left

            # Iterate through each cell in grid2
            for i in range(self.m):
                  for j in range(self.n):
                        # If the cell is land in grid2, it could be part of a sub-island
                        if grid2[i][j] == 1:
                              self.isSubIsland = True  # Start assuming this is a sub-island
                              dfs(i, j)  # Perform DFS to check the whole island

                              # If the flag remains true after DFS, it means this island is a sub-island
                              if self.isSubIsland:
                                    subIslandCount += 1  # Increment the count of sub-islands

            return subIslandCount  # Return the total count of sub-islands


