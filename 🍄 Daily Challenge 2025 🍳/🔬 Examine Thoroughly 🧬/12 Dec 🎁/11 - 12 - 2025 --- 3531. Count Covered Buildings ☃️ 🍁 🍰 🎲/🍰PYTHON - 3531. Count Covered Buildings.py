#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3531

#? ⌚ Time complexity ➺ O(m) 👉🏻  n = len(buildings)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def countCoveredBuildings(self, n: int, buildings: List[List[int]]) -> int:
            """
            Count buildings that are "covered" by other buildings in both row and column.
            A building at (x,y) is covered if:
            - In row y: there are buildings with smaller AND larger x-coordinates
            - In column x: there are buildings with smaller AND larger y-coordinates
            """

            # For each row y: track min/max x-coordinates of buildings in that row
            max_row = [0] * (n + 1)
            min_row = [n + 1] * (n + 1)

            # For each column x: track min/max y-coordinates of buildings in that column
            max_col = [0] * (n + 1)
            min_col = [n + 1] * (n + 1)

            # Step 1: Populate min/max arrays for rows and columns
            for p in buildings:
                  x, y = p[0], p[1]
                  # Update row y's x-range
                  max_row[y] = max(max_row[y], x)
                  min_row[y] = min(min_row[y], x)
                  # Update column x's y-range
                  max_col[x] = max(max_col[x], y)
                  min_col[x] = min(min_col[x], y)

            res = 0
            # Step 2: Check each building if it's covered
            for p in buildings:
                  x, y = p[0], p[1]
                  # Building is covered if it's strictly inside the row/column range
                  if (
                        x > min_row[y] and      # Not the leftmost in row y
                        x < max_row[y] and      # Not the rightmost in row y
                        y > min_col[x] and      # Not the bottommost in column x
                        y < max_col[x]          # Not the topmost in column x
                  ):
                        res += 1

            return res
