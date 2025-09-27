#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 812

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

import itertools
from typing import List

class Solution:
      def largestTriangleArea(self, points: List[List[int]]) -> float:
            # Helper function to calculate the area of a triangle
            # formed by three points using the Shoelace formula
            def triangleArea(x, y, z):
                  # Formula: 0.5 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
                  return 0.5 * abs(
                        x[0] * (y[1] - z[1]) +
                        y[0] * (z[1] - x[1]) +
                        z[0] * (x[1] - y[1])
                  )

            # Generate all unique combinations of 3 points using itertools.combinations
            # Calculate the triangle area for each combination
            # Return the maximum area among all possible triangles
            return max(triangleArea(*triangle) for triangle in itertools.combinations(points, 3))
