#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3459

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m, n = Dim(grid)

#? 🧺 Space complexity ➺ O(m * n)

from functools import cache
from typing import List 

class Solution:
      def lenOfVDiagonal(self, grid: List[List[int]]) -> int:
            """
            Goal:
            - Find the maximum length of a diagonal segment that:
                  1) Starts on a cell with value 1,
                  2) Proceeds along one of the four diagonal directions,
                  3) Alternates cell values in the sequence 1 -> 2 -> 0 -> 2 -> 0 -> ...,
                  4) Makes at most one clockwise 90-degree turn to another diagonal,
                  5) Counts the number of visited cells (segment length). [1][3][7]

            Strategy:
            - Try every cell with value 1 as a starting point and every diagonal direction.
            - Use DFS with memoization on state (x, y, direction, can_turn, next_target_value).
            - Move one step; if next cell matches target, continue forward.
            - If a turn is still available, also try a single clockwise rotation and continue.
            - Return the longest path length across all starts/directions. [3][5][7]
            """

            # Four diagonal directions in clockwise order:
            # 0: down-right (1, 1), 1: down-left (1, -1), 2: up-left (-1, -1), 3: up-right (-1, 1) [3][5]
            DIRS = ((1, 1), (1, -1), (-1, -1), (-1, 1))
            m, n = len(grid), len(grid)  # Grid dimensions. [1]

            @cache
            def dfs(cx: int, cy: int, direction: int, can_turn: bool, target: int) -> int:
                  """
                  Returns the maximum number of additional steps that can be taken starting
                  from the next cell in `direction`, expecting `target` at that next cell.
                  The path alternates the required target value according to the problem,
                  and can make at most one clockwise turn when can_turn is True. [3][7]

                  State:
                  - (cx, cy): current position (already included in the path by the caller).
                  - direction: index into DIRS indicating current diagonal direction.
                  - can_turn: whether the single clockwise turn is still available.
                  - target: the value required for the next cell to continue the path. [3][5]
                  """
                  dx, dy = DIRS[direction]
                  nx, ny = cx + dx, cy + dy

                  # Stop if going out of bounds or next cell does not match the required value. [3][5]
                  if nx < 0 or ny < 0 or nx >= m or ny >= n or grid[nx][ny] != target:
                        return 0

                  # The alternating sequence is 1 -> 2 -> 0 -> 2 -> 0 -> ...
                  # Given target in {0,2}, the next expected target toggles: 2 -> 0, 0 -> 2. [3][7]
                  next_target = 0 if target == 2 else 2

                  # Option 1: continue straight in the same direction. [3][5]
                  best = dfs(nx, ny, direction, can_turn, next_target)

                  # Option 2: if turn still available, make exactly one clockwise 90° turn. [1][3]
                  if can_turn:
                        turned_dir = (direction + 1) % 4  # Clockwise rotation in DIRS order. [3][5]
                        best = max(best, dfs(nx, ny, turned_dir, False, next_target))

                  # Count the current step (moving from (cx, cy) to (nx, ny)). [3]
                  return best + 1

            ans = 0
            # Start only on cells with value 1, as per the problem’s V-segment definition. [1][3]
            for i in range(m):
                  for j in range(n):
                        if grid[i][j] == 1:
                              # Try all four diagonals as the initial direction. [3][5]
                              for d in range(4):
                                    # From (i, j), we take at least this starting cell (+1),
                                    # and then dfs attempts to step to a neighbor expecting 2 next. [3][5]
                                    ans = max(ans, 1 + dfs(i, j, d, True, 2))

            return ans  # Longest V-shaped diagonal segment length over all starts/directions. [1][3]
