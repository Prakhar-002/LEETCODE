#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3625

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

from collections import defaultdict

class Solution:
      def countTrapezoids(self, points: List[List[int]]) -> int:
            n = len(points)
            INF = 10**9 + 7  # Special value for vertical lines (infinite slope)

            # Group lines by slope → intercept (parallel lines)
            slope_to_intercept = defaultdict(list)
            # Group lines by midpoint → slope (intersecting lines)
            mid_to_slope = defaultdict(list)
            ans = 0

            # Generate all possible line segments between pairs of points
            for i in range(n):
                  x1, y1 = points[i]
                  for j in range(i + 1, n):
                        x2, y2 = points[j]
                        dx = x1 - x2
                        dy = y1 - y2

                        # Calculate slope and y-intercept
                        if x2 == x1:  # Vertical line
                              k = INF
                              b = x1       # Use x-coordinate as intercept
                        else:
                              k = (y2 - y1) / (x2 - x1)  # Slope m
                              b = (y1 * dx - x1 * dy) / dx  # y-intercept

                        # Midpoint identifier (scaled to avoid floating point)
                        mid = (x1 + x2) * 10000 + (y1 + y2)
                        
                        # Group parallel lines (same slope, different intercepts)
                        slope_to_intercept[k].append(b)
                        # Group intersecting lines (same midpoint, different slopes)
                        mid_to_slope[mid].append(k)

            # Count trapezoids from PARALLEL line pairs (two parallel + two non-parallel)
            for sti in slope_to_intercept.values():
                  if len(sti) == 1:
                        continue  # Need at least 2 parallel lines

                  # Count parallel lines with same intercept (collinear → skip)
                  cnt = defaultdict(int)
                  for b_val in sti:
                        cnt[b_val] += 1

                  total_sum = 0
                  for count in cnt.values():
                        # Each pair of parallel lines from different intercepts forms trapezoid top/bottom
                        ans += total_sum * count
                        total_sum += count

            # Subtract overcounted cases from INTERSECTING line pairs
            for mts in mid_to_slope.values():
                  if len(mts) == 1:
                        continue

                  # Count lines intersecting at same midpoint with same slope (collinear)
                  cnt = defaultdict(int)
                  for k_val in mts:
                        cnt[k_val] += 1

                  total_sum = 0
                  for count in cnt.values():
                        # Subtract invalid trapezoids (collinear intersecting lines)
                        ans -= total_sum * count
                        total_sum += count

            return ans % INF
