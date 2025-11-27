#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2435

#? ⌚ Time complexity ➺ O(r * c * k) 

#? 🧺 Space complexity ➺ O(r * c * k)

class Solution:
      def numberOfPaths(self, grid: List[List[int]], k: int) -> int:
            ROWS, COLS = len(grid), len(grid[0])
            # 3D cache to memoize results: cache[row][col][remainder]
            cache = [[[-1] * k for _ in range(COLS)] for _ in range(ROWS)]
            MOD = 10**9 + 7  # Modulus for large results

            def dfs(r, c, remain):
                  # Base case: reached bottom-right cell
                  if r == ROWS - 1 and c == COLS - 1:
                        remain = (remain + grid[r][c]) % k  
                        # If remainder is zero, count this path as 1, else 0
                        return 0 if remain else 1

                  # If out of grid boundaries, no path
                  if r == ROWS or c == COLS:
                        return 0

                  # Return cached result if computed before
                  if cache[r][c][remain] > -1:
                        return cache[r][c][remain]

                  # Explore paths moving down and right
                  cache[r][c][remain] = (
                        dfs(r + 1, c, (remain + grid[r][c]) % k) % MOD +
                        dfs(r, c + 1, (remain + grid[r][c]) % k) % MOD
                  ) % MOD

                  return cache[r][c][remain]

            # Start DFS from top-left corner with initial remainder 0
            return dfs(0, 0, 0)
