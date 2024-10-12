#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2406

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(intervals)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minGroups(self, intervals: List[List[int]]) -> int:
            # `startPoints` lists stores the start points of each interval
            startPoints = []
            # `endPoints` lists stores the end points of each interval.
            endPoints = []

            # `for` loop populates these lists by iterating over the `intervals` list.
            for start, end in intervals:
                  # store the staring point in `startPoints` list
                  startPoints.append(start)
                  # store the ending point in `endPoints` list
                  endPoints.append(end)

            # sort the `startPoints` list
            startPoints.sort()
            # sort the `endpoints` list
            endPoints.sort()

            # `sIdx` pointer used to iterate over the sorted `startPoints` lists
            sIdx = 0
            # `eIdx` pointer used to iterate over the sorted `endPoints` lists
            eIdx = 0

            groups = 0
            intersections = 0

            # loop continues until all intervals (start points) have been processed
            while sIdx < len(intervals):
                  #  if the current start point is earlier or equal to the current end point
                  if startPoints[sIdx] <= endPoints[eIdx]:
                        # means a new interval is starting before the last one ends
                        intersections += 1 # thus increasing the number of "intersections"
                        # start pointer is incremented to process the next interval
                        sIdx += 1

                  # If not, an interval has ended before a new one starts
                  else :
                        # count of "intersections" decreases
                        intersections -= 1
                        # and the end pointer is incremented
                        eIdx += 1

                  #  `groups` variable is updated to hold the maximum number of intersections seen so far
                  groups = max(groups, intersections)

            # returns `groups`, which now holds the minimum number of groups required
            return groups