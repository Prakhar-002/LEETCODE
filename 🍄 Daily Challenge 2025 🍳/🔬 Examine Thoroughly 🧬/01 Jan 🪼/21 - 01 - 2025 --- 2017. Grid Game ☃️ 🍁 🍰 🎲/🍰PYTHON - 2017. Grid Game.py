#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2017

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def gridGame(self, grid: list[list[int]]) -> int:
            # Initialize the minimum points required to win as the maximum possible value
            point = float('inf')

            # Suffix sum of the points in the first row, representing the total points 
            # remaining in the first row from the current column onward
            firstRowSuffix = 0

            # Prefix sum of the points in the second row, representing the total points 
            # accumulated in the second row up to the current column
            secRowPrefix = 0

            # Calculate the total sum of the first row to initialize the suffix sum
            for FirstRowPoint in grid[0]:
                  firstRowSuffix += FirstRowPoint

            # Number of columns in the grid
            n = len(grid[0])

            # Iterate over each column to determine the optimal position to switch to the second row
            for j in range(n):
                  # Decrement the points in the suffix sum as we move to the next column
                  firstRowSuffix -= grid[0][j]

                  # Calculate the maximum points that the opponent can collect if we switch 
                  # to the second row at this column, and update the minimum points accordingly
                  point = min(point, max(firstRowSuffix, secRowPrefix))

                  # Increment the prefix sum for the second row as we include the current column
                  secRowPrefix += grid[1][j]

            # Return the minimum points required for the robot to win
            return point

# !------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def gridGame(self, grid: List[List[int]]) -> int:
            cols = len(grid[0])  # Number of columns

            # Compute prefix sums for the two rows
            prefix_top = grid[0].copy()
            prefix_bottom = grid[1].copy()

            for col in range(1, cols):
                  prefix_top[col] += prefix_top[col - 1]
                  prefix_bottom[col] += prefix_bottom[col - 1]

            min_second_score = float('inf')  # Minimum score for the second robot

            # Evaluate all possible columns where the first robot changes rows
            for col in range(cols):
                  # Remaining score for the top row after `col`
                  score_top = prefix_top[-1] - prefix_top[col]
                  # Collected score for the bottom row up to `col`
                  score_bottom = prefix_bottom[col - 1] if col > 0 else 0
                  # Maximum score the second robot can get
                  second_robot_score = max(score_top, score_bottom)
                  # Update minimum possible score for the second robot
                  min_second_score = min(min_second_score, second_robot_score)

            return min_second_score

