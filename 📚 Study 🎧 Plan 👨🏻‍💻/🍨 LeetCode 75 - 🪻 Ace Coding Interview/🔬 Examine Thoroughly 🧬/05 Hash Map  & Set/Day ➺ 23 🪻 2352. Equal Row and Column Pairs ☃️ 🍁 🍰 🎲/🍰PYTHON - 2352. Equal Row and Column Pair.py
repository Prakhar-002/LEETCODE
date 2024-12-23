#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2352

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of rows

#? 🧺 Space complexity ➺ O(n * m)  -> m = No. of columns

from collections import Counter
from typing import List

class Solution:
      def equalPairs(self, grid: List[List[int]]) -> int:
            # Step 1: Convert each row into a tuple to make them hashable
            row_tuples = [tuple(row) for row in grid]

            # Step 2: Convert each column into a tuple to make them hashable
            col_tuples = []
            for col_index in range(len(grid[0])):
                  # Collect each column as a tuple
                  column = [grid[row_index][col_index] for row_index in range(len(grid))]
                  col_tuples.append(tuple(column))

            # Step 3: Count the frequency of each row and column using Counter
            row_counter = Counter(row_tuples)
            col_counter = Counter(col_tuples)

            # Step 4: Calculate the number of equal pairs (matching rows and columns)
            result = 0
            for row, row_count in row_counter.items():
                  if row in col_counter:
                        # Multiply the count of matching rows and columns to find the total pairs
                        result += row_count * col_counter[row]

            return result
