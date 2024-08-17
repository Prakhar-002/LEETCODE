#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1937

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = rows, n = col

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def maxPoints(self, points: List[List[int]]) -> int:
            # number of rows and columns 
            ROWS, COLS = len(points), len(points[0])

            # used to keep track of the maximum points collectable from the prev row 
            # when traversing the grid row by row
            prevRowPoints = points[0]

            #  iterates over each row starting from the second one
            for row in range(1, ROWS):
                  # copy of the point values in the current row
                  nextRowPoints = points[row].copy()

                  # maximum points that can be obtained from the left side and right side
                  leftMaxSum, rightMaxSum = [0] * COLS, [0] * COLS

                  #  first element of `leftMaxSum` is set to the first value of the previous row's point
                  leftMaxSum[0] = prevRowPoints[0]

                  # loop iterates over the columns, starting from the second column
                  for col in range(1, COLS):
                        # comparing the points at the current position in `prevRowPoints` 
                        # with the max points decrementing by 1 from the previous calculation
                        leftMaxSum[col] = max(prevRowPoints[col], leftMaxSum[col - 1] - 1)

                  # the last element of `rightMaxSum` is set to the points value from the last column of the prev row
                  rightMaxSum[COLS - 1] = prevRowPoints[COLS - 1]

                  # loop then moves from right to left, starting from the second-to-last column
                  for col in range(COLS - 2, -1, -1):
                        # comparing the points at the current position in `prevRowPoints` 
                        # with the max points decrementing by 1 from the previous calculation
                        rightMaxSum[col] = max(prevRowPoints[col], rightMaxSum[col + 1] - 1)

                  # iterates over the columns
                  for col in range(COLS):
                        #  each value in `nextRowPoints` the maximum of the `leftMaxSum` and `rightMaxSum`
                        nextRowPoints[col] += max(leftMaxSum[col], rightMaxSum[col])

                  # `prevRowPoints` is then set to `nextRowPoints` for the next iteration
                  prevRowPoints = nextRowPoints

            # returns the maximum value in the last computed `prevRowPoints`,
            return max(prevRowPoints)
