#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3516

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findClosest(self, x: int, y: int, z: int) -> int:
            # Calculate absolute distance from target to first value
            dist_first = abs(z - x)
            # Calculate absolute distance from target to second value
            dist_sec = abs(z - y)

            # If the first value is closer to the target, return 1
            if dist_first < dist_sec:
                  return 1
            # If the second value is closer to the target, return 2
            elif dist_first > dist_sec:
                  return 2
            # If both are equally close, return 0
            else:
                  return 0
