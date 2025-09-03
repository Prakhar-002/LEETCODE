#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3027

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List 
import math

class Solution:
      def numberOfPairs(self, points: List[List[int]]) -> int:
            ans = 0
            # ------ Sort points: x ascending, then y descending for proper scan order
            points.sort(key=lambda x: (x[0], -x[1]))

            # ------ Iterate over each point as candidate A
            for i in range(len(points) - 1):
                  pointA = points[i]
                  # ------ Initialize bounds for pair B
                  xMin = pointA[0] - 1   # Leftmost x allowed for B
                  xMax = math.inf        # No right limit
                  yMin = -math.inf       # No lower y limit
                  yMax = pointA[1] + 1   # Topmost y allowed for B

                  # ------ Scan remaining points for valid B
                  for j in range(i + 1, len(points)):
                        pointB = points[j]
                        # ------ Check if B is within the bounds defined by A and previous B
                        if (
                              pointB[0] > xMin
                              and pointB[0] < xMax
                              and pointB[1] > yMin
                              and pointB[1] < yMax
                        ):
                              ans += 1
                              # ------ Restrict bounds for next candidate B
                              xMin = pointB[0]
                              yMin = pointB[1]

            # ------ Return total number of valid pairs found
            return ans
