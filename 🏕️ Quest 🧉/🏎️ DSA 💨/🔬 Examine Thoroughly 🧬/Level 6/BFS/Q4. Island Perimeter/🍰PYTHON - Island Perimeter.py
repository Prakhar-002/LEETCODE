#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q4

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List 

class Solution:
      def islandPerimeter(self, grid: List[List[int]]) -> int:
            # Set to record visited land cells so each is processed once
            visit = set()

            def dfs(i: int, j: int) -> int:
                  # If out of bounds or on water, that side contributes 1 to perimeter
                  if (i < 0 or i >= len(grid) or
                        j < 0 or j >= len(grid[0]) or
                        grid[i][j] == 0):
                        return 1

                  # If this land cell was already counted, it contributes 0 new perimeter
                  if (i, j) in visit:
                        return 0

                  # Mark current land cell as visited
                  visit.add((i, j))

                  # Explore all 4 directions and sum perimeter contributions
                  perimeter = dfs(i + 1, j)   # down
                  perimeter += dfs(i - 1, j)  # up
                  perimeter += dfs(i, j + 1)  # right
                  perimeter += dfs(i, j - 1)  # left

                  return perimeter

            # Find any land cell as a starting point and run DFS from there
            for i in range(len(grid)):
                  for j in range(len(grid[0])):
                        if grid[i][j] == 1:
                              return dfs(i, j)

            # If no land at all, perimeter is 0
            return 0
