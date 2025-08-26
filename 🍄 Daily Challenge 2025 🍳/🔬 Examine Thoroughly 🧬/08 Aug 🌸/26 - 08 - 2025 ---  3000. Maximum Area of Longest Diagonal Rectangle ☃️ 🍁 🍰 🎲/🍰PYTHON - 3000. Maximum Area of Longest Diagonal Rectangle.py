#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3000

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangles)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def areaOfMaxDiagonal(self, rectangles: List[List[int]]) -> int:
            # Store the maximum area found so far
            max_area = 0

            # Store the maximum diagonal length encountered (squared value to avoid sqrt)
            max_dia_sq = 0

            # Iterate over each rectangle defined by [length, width]
            for length, width in rectangles:
                  # Calculate the squared diagonal using Pythagoras theorem
                  cur_dia_sq = (length ** 2) + (width ** 2)

                  area = length * width

                  # If a longer diagonal is found, update both area and diagonal
                  if cur_dia_sq > max_dia_sq:
                        max_area = area
                        max_dia_sq = cur_dia_sq

                  # If diagonals are equal, take the rectangle with the larger area
                  elif cur_dia_sq == max_dia_sq:
                        max_area = max(max_area, area)

            # Return the rectangle area corresponding to the largest diagonal
            return max_area
