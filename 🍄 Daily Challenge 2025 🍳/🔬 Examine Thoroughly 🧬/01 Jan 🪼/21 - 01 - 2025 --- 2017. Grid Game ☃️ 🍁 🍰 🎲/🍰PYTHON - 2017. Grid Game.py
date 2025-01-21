#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2017

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

