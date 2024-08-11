#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1568

#? ⌚ Time complexity ➺ O((n * m) ^ 2) 👉🏻  n = row, m = col

#? 🧺 Space complexity ➺ O(n * m)

class Solution:
      def minDays(self, grid: List[List[int]]) -> int:
            # func counts the number of islands (disconnected clusters of `1`s)
            def count_islands():
                  # set keeps track of all the cells that have been visited
                  seen = set()

                  def dfs(r, c):
                        # stack to manage cells to visit
                        stack = [(r, c)]
                        while stack:
                              row, col = stack.pop()
                              #  visit all neighboring cells `(neiRow, neiCol)` 
                              for neiRow, neiCol in [(row - 1, col), (row + 1, col), (row, col - 1), (row, col + 1)]:
                                    if (
                                          # if they are part of the island 
                                          0 <= neiRow < len(grid)
                                          and 0 <= neiCol < len(grid[0])
                                          # `grid[neiRow][neiCol] == 1`
                                          and grid[neiRow][neiCol] == 1
                                          # not previously seen
                                          and (neiRow, neiCol) not in seen
                                    ):
                                          # adds them to the stack
                                          seen.add((neiRow, neiCol))
                                          stack.append((neiRow, neiCol))

                  # Initialize an island counter
                  islands = 0
                  #  Loop through all cells in the grid
                  for row in range(len(grid)):
                        for col in range(len(grid[0])):
                              # If a cell `(row, col)` is a `1` and not seen
                              if grid[row][col] == 1 and (row, col) not in seen:
                                    # it’s a new island
                                    islands += 1
                                    seen.add((row, col))
                                    # Perform a DFS from cell to mark all connected `1`s
                                    dfs(row, col)

                  return islands

            # if count_islands() != 1
            # If there are initially no valid islands or already more than one island
            if count_islands() != 1:
                  # return `0` because no split is needed or it’s already split
                  return 0

            # Loop through every cell
            for row in range(len(grid)):
                  for col in range(len(grid[0])):
                        if grid[row][col] == 1:
                              # Temporarily set a land cell (`1`) to water (`0`)
                              grid[row][col] = 0
                              # recount the islands if we get != 1
                              # If changing this one cell results in more than one island
                              if count_islands() != 1:
                                    # return `1` because it's possible to split the island in a single day
                                    return 1
                              # Reset the cell back to land after the check
                              grid[row][col] = 1

            # If no single cell change results in multiple islands
            # return `2` indicating it takes at least two days
            return 2