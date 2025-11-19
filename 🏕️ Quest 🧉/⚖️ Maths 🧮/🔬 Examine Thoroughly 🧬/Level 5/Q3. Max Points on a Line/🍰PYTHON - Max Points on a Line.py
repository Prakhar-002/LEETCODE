#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L5 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def maxPoints(self, points: List[List[int]]) -> int:
            # If there are 2 or fewer points, all points lie on the same line
            if len(points) <= 2:
                  return len(points)

            # Helper function to calculate the slope between two points p1 and p2
            def find_scope(p1, p2):
                  x1, y1 = p1
                  x2, y2 = p2
                  # To handle vertical lines, return infinity if x-coordinates are equal
                  if x1 - x2 == 0:
                        return float('inf')
                  # Otherwise return the slope as the ratio of the differences in y and x
                  return (y1 - y2) / (x1 - x2)

            ans = 1  # Initialize maximum points on a line to at least 1

            # Iterate through each point p1 in the list
            for i, p1 in enumerate(points):
                  slopes = defaultdict(int)  # Dictionary to count points for each slope from p1

                  # Check each point p2 after p1 to avoid duplicate pairs
                  for j, p2 in enumerate(points[i + 1:]):
                        slope = find_scope(p1, p2)   # Calculate slope between p1 and p2
                        slopes[slope] += 1            # Increment count for this slope
                        ans = max(slopes[slope], ans) # Update maximum count if needed

            # Add 1 to include the original point itself in the count
            return ans + 1
