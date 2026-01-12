#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L5 Q1

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class RangeModule(object):
      def __init__(self):
            # List of non-overlapping intervals sorted by start time [start, end)
            self.ranges = []

      def _bounds(self, left, right):
            """
            Find the range of intervals [i, j] that overlap with [left, right)
            Uses ternary search-like optimization for O(log n) performance
            """
            i, j = 0, len(self.ranges) - 1
            
            # Ternary search to find leftmost overlapping interval
            for d in (100, 10, 1):
                  # Move i forward while intervals end before left (no overlap)
                  while i + d - 1 < len(self.ranges) and self.ranges[i + d - 1][1] < left:
                        i += d
                  # Move j backward while intervals start after right (no overlap)
                  while j >= d - 1 and self.ranges[j - d + 1][0] > right:
                        j -= d
            return i, j

      def addRange(self, left, right):
            """
            Add [left, right) to the set of intervals and merge overlapping intervals
            """
            i, j = self._bounds(left, right)
            
            # Merge all overlapping intervals [i, j]
            if i <= j:
                  # Take min start and max end of all overlapping intervals
                  left = min(left, self.ranges[i][0])
                  right = max(right, self.ranges[j][1])
            
            # Replace intervals [i, j+1) with the merged interval
            self.ranges[i : j + 1] = [(left, right)]

      def queryRange(self, left, right):
            """
            Check if [left, right) is completely covered by some interval
            """
            # Find first interval starting >= left using binary search
            i = bisect.bisect_left(self.ranges, (left, float("inf")))
            
            # Check previous interval (candidate for covering [left, right))
            if i:
                  i -= 1
            
            # Return true if some interval completely covers [left, right)
            return (
                  bool(self.ranges)  # ranges is not empty
                  and self.ranges[i][0] <= left  # interval starts before/at left
                  and right <= self.ranges[i][1]  # interval ends after right
            )

      def removeRange(self, left, right):
            """
            Remove [left, right) from all intervals, splitting as necessary
            """
            i, j = self._bounds(left, right)
            
            # No overlapping intervals found
            if i > j:
                  return
            
            merge = []
            # Process each overlapping interval [i, j]
            for k in range(i, j + 1):
                  # Save left part if it exists (before left)
                  if self.ranges[k][0] < left:
                        merge.append((self.ranges[k][0], left))
                  # Save right part if it exists (after right)
                  if right < self.ranges[k][1]:
                        merge.append((right, self.ranges[k][1]))

            # Replace overlapping intervals with leftover parts
            self.ranges[i : j + 1] = merge
