#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1267

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n + m)  ->  m = lem(grid[0])

class Solution:
      def countServers(self, grid: List[List[int]]) -> int:
            # Determine the number of rows and columns in the grid
            ROWS, COLS = len(grid), len(grid[0])

            # Arrays to store the count of servers in each row and column
            row_cnt = [0] * ROWS
            col_cnt = [0] * COLS

            # First pass: count the servers in each row and column
            for r in range(ROWS):
                  for c in range(COLS):
                        if grid[r][c]:  # If there is a server at this position
                              row_cnt[r] += 1  # Increment the count for the row
                              col_cnt[c] += 1  # Increment the count for the column

            # Variable to count the servers that can communicate
            communicate = 0

            # Second pass: check if a server can communicate with another
            for r in range(ROWS):
                  for c in range(COLS):
                        # A server can communicate if it's not isolated
                        # (i.e., there is more than one server in its row or column)
                        if grid[r][c] and (row_cnt[r] > 1 or col_cnt[c] > 1):
                              communicate += 1  # Increment the count of communicating servers

            return communicate  # Return the total count of communicating servers
