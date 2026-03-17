#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1727

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def largestSubmatrix(self, matrix: List[List[int]]) -> int:
            # Total number of rows and columns
            ROWS, COLS = len(matrix), len(matrix[0])

            # This will store the maximum rectangle area found
            maxArea = 0

            # This stores previous row's column heights
            # Format: [(height, column_index)]
            prevHeights = []

            # Traverse each row of the matrix
            for row in range(ROWS):

                  # This will store updated heights for current row
                  heights = []

                  # To track which columns are already extended
                  seen = set()

                  # -------------------------------
                  # STEP 1: Extend previous heights
                  # -------------------------------
                  # If previous row had height at a column
                  # and current row also has 1 in that column,
                  # then we extend the height
                  for height, col in prevHeights:
                        if matrix[row][col] == 1:
                              # Increase height by 1
                              heights.append((height + 1, col))

                              # Mark this column as used
                              seen.add(col)

                  # -------------------------------
                  # STEP 2: Start new heights
                  # -------------------------------
                  # For columns not extended above,
                  # if current cell is 1 → start fresh height = 1
                  for col in range(COLS):
                        if col not in seen and matrix[row][col] == 1:
                              heights.append((1, col))

                  # -------------------------------
                  # STEP 3: Sort heights (IMPORTANT)
                  # -------------------------------
                  # We can rearrange columns freely,
                  # so we sort heights in descending order
                  # to maximize rectangle area
                  heights.sort(reverse=True)

                  # -------------------------------
                  # STEP 4: Calculate max area
                  # -------------------------------
                  # Try using first i columns (after sorting)
                  # width = i + 1
                  # height = heights[i][0]
                  for i in range(len(heights)):
                        width = i + 1
                        height = heights[i][0]

                        # Area = width * height
                        maxArea = max(maxArea, width * height)

                  # -------------------------------
                  # STEP 5: Move to next row
                  # -------------------------------
                  # Current heights become previous heights
                  prevHeights = heights

            # Return the maximum rectangle area found
            return maxArea