#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3025

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(points)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def numberOfPairs(self, points: List[List[int]]) -> int:
            # ------ Step 1: Sort points by x ascending, then y descending
            # ------ This ensures proper ordering for pair search
            points.sort(key=lambda x: (x[0], -x[1]))
            cnt = 0

            # ------ Step 2: For each point i, scan points after it to count valid pairs
            # ------ Valid pair conditions: x[i] < x[j], lower < y[j] <= y[i]
            for i in range(len(points) - 1):
                  x, y = points[i]
                  lower = -1
                  for j in range(i + 1, len(points)):
                        # ------ Check if points[j][1] is in (lower, y]
                        if lower < points[j][1] <= y:
                              cnt += 1
                              lower = points[j][1]
                        # ------ Early exit: if lower == y, no more valid pairs
                        if lower == y:
                              break

            # ------ Step 3: Return the total count of pairs
            return cnt
