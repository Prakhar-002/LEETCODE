#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2528

#? ⌚ Time complexity ➺ O(n lod D) 👉🏻  n = len(stations)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def maxPower(self, stations: List[int], r: int, k: int) -> int:
            n = len(stations)
            # cnt will be used for range updates (difference array technique)
            cnt = [0] * (n + 1)

            # Populate the difference array based on initial station powers
            for i in range(n):
                  left = max(0, i - r)                  # Left bound for influence of stations[i]
                  right = min(n, i + r + 1)             # Right bound (+1 for right-exclusive range)
                  cnt[left] += stations[i]              # Add station power to left bound
                  cnt[right] -= stations[i]             # Remove station power after the range

            # Helper function to check if a given minimum power value is achievable
            def check(val: int) -> bool:
                  diff = cnt.copy()                     # Copy of difference array for simulation
                  total = 0                             # Running sum of station power at each city
                  remaining = k                         # Keep track of additional stations to be added

                  # Traverse all cities
                  for i in range(n):
                        total += diff[i]                # Calculate power at current city
                        if total < val:                 # If less than required minimum power
                              add = val - total         # Amount needed to meet the requirement
                              if remaining < add:       # Not enough stations left to add
                                    return False
                              remaining -= add          # Use the needed additions from k
                              end = min(n, i + 2 * r + 1) # Influence range for added station
                              diff[end] -= add          # Subtract added power after influence range
                              total += add              # Update current city's power with new stations
                  return True                           # All cities meet the required power

            # Binary search to maximize the minimum achievable power
            lo, hi = min(stations), sum(stations) + k   # Search between min station and max possible after additions
            res = 0
            while lo <= hi:
                  mid = (lo + hi) // 2
                  if check(mid):
                        res = mid                      # mid is feasible, try for higher value
                        lo = mid + 1
                  else:
                        hi = mid - 1                   # mid not feasible, try lower values
            return res                                  # Return highest feasible minimum power
