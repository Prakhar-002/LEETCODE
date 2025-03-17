#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2594

#? ⌚ Time complexity ➺ O(n log (r * cars^2)) 👉🏻  n = len(ranks)

#? 🧺 Space complexity ➺ O(1)

from typing import List
from math import sqrt

class Solution:
      def repair_cars(self, ranks: List[int], cars: int) -> int:
            """
            This function determines the minimum time required to repair `cars` number of cars 
            using mechanics with given `ranks`, where a mechanic with rank `r` takes `r * (cars_repaired)^2` time 
            to fix a single car.
            """

            # Helper function to check how many cars can be repaired within `time`
            def cars_repaired_within(time: int) -> int:
                  repaired_cars = 0

                  # Each mechanic repairs cars based on the given time limit
                  for rank in ranks:
                        repaired_cars += int(sqrt(time / rank))

                  return repaired_cars

            # Binary search boundaries: 
            # Minimum possible time = 1
            # Maximum possible time = the worst case (highest rank mechanic takes all repairs)
            l, r = 1, ranks[0] * cars * cars

            min_time = -1  # Store the minimum time required

            # Perform binary search to find the least time required to repair all cars
            while l <= r:
                  m = (l + r) // 2  # Midpoint time guess
                  repaired_cars = cars_repaired_within(m)  # Check how many cars can be repaired in `m` time

                  if repaired_cars >= cars:  
                        min_time = m  # Store the valid time
                        r = m - 1  # Try to find a smaller time
                  else:
                        l = m + 1  # Increase time if not enough cars are repaired

            return min_time  # Return the minimum time required
