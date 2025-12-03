#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 56

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def merge(self, intervals: List[List[int]]) -> List[List[int]]:
            merged = []  # Final list of merged intervals

            # ----------------------------------------------------------
            # Step 1: Sort intervals by their start value
            # ----------------------------------------------------------
            intervals.sort(key=lambda x: x[0])

            # Step 2: Initialize 'prev' as the first interval
            prev = intervals[0]

            # ----------------------------------------------------------
            # Step 3: Iterate over each interval and merge if overlapping
            # ----------------------------------------------------------
            for interval in intervals[1:]:
                  # Overlap case → merge by updating the end time
                  if interval[0] <= prev[1]:
                        prev[1] = max(prev[1], interval[1])
                  # No overlap → push previous interval, update 'prev'
                  else:
                        merged.append(prev)
                        prev = interval

            # Step 4: Append the last interval
            merged.append(prev)

            return merged