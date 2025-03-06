#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2965

#? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
            # Get the dimensions of the square grid (n x n)
            n = len(grid)

            # Total number of cells in the grid (1 to n*n)
            total = n * n

            # Calculate actual sum of all numbers present in the grid
            sum_val = sum(num for row in grid for num in row)

            # Calculate actual sum of squares of all numbers in the grid
            sqr_sum = sum(num * num for row in grid for num in row)

            # Calculate expected sum of numbers from 1 to n*n
            expected_sum = total * (total + 1) // 2

            # Calculate expected sum of squares from 1 to n*n
            expected_square_sum = total * (total + 1) * (2 * total + 1) // 6

            # Difference between actual sum and expected sum
            # sum_diff = actual sum - expected sum = (repeated number - missing number)
            sum_diff = sum_val - expected_sum

            # Difference between actual square sum and expected square sum
            # sqr_diff = actual square sum - expected square sum = (repeated² - missing²)
            sqr_diff = sqr_sum - expected_square_sum

            # Using algebraic identities:
            # (x - y) = sum_diff
            # (x² - y²) = (x - y) * (x + y) = sum_diff * (x + y)
            # x = repeated number, y = missing number

            # x + y = sqr_diff / sum_diff
            sum_x_plus_y = sqr_diff // sum_diff

            # Solving two equations:
            # x - y = sum_diff
            # x + y = sum_x_plus_y

            # x (repeated) = (sum_x_plus_y + sum_diff) / 2
            repeat = (sum_x_plus_y + sum_diff) // 2

            # y (missing) = (sum_x_plus_y - sum_diff) / 2
            missing = (sum_x_plus_y - sum_diff) // 2

            # Return the repeated and missing numbers as a list
            return [repeat, missing]
