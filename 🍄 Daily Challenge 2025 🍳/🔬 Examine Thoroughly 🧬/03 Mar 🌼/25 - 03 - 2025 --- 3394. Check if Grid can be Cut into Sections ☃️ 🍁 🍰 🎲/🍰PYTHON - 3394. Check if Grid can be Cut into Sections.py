#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3394

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(rectangles)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def checkValidCuts(self, n: int, rectangles: List[List[int]]) -> bool:
            # Extract x and y coordinate intervals from the rectangles
            x_intervals = [(rect[0], rect[2]) for rect in rectangles]  # (x_start, x_end)
            y_intervals = [(rect[1], rect[3]) for rect in rectangles]  # (y_start, y_end)

            # Sort the intervals based on the starting coordinate
            x_intervals.sort()
            y_intervals.sort()

            # Function to count non-overlapping intervals
            def count_non_overlapping(intervals):
                  count = 0  # Tracks the number of non-overlapping intervals
                  last_end = -1  # Stores the end of the last selected interval

                  for start, end in intervals:
                        # If the current interval does not overlap with the last one, count it
                        if last_end <= start:
                              count += 1

                        # Update the last selected interval's end coordinate
                        last_end = max(last_end, end)

                        # Stop early if at least 3 non-overlapping intervals are found
                        if count == 3:
                              break

                  return count

            # Check whether there are at least 3 non-overlapping intervals in either direction
            return max(
                  count_non_overlapping(x_intervals),
                  count_non_overlapping(y_intervals)
            ) >= 3
