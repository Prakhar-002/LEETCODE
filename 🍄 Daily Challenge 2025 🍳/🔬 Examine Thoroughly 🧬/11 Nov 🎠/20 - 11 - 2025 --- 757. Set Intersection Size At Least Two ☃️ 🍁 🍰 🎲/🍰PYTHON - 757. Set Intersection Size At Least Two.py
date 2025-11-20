#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 757

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def intersectionSizeTwo(self, intervals: List[List[int]]) -> int:
            res = 0  # Initialize result: minimum size of the intersection set

            # Sort intervals by ending value first; break ties by starting value descending
            intervals.sort(key = lambda i: (i[1], i[0]))

            # p1 and p2 track the last two chosen points for set S, initialized to impossible values
            p1, p2 = -1, -1

            # Process each interval in sorted order
            for left, right in intervals:
                  # Case 1: current interval contains neither p1 nor p2
                  if p2 < left:
                        # Need to add two points: right-1 and right (largest in this interval)
                        res += 2
                        p1, p2 = right - 1, right

                  # Case 2: only p2 (but not p1) is inside current interval
                  elif p1 < left:
                        # Need to add one more point (right)
                        res += 1
                        # If right == p2, just move p1 left; else shift window to p2 and right
                        if p2 == right:
                              p1 = right - 1
                        else:
                              p1, p2 = p2, right

                  # Case 3: both points already cover the interval, do nothing

            # Return the final minimum size of the intersection set
            return res
