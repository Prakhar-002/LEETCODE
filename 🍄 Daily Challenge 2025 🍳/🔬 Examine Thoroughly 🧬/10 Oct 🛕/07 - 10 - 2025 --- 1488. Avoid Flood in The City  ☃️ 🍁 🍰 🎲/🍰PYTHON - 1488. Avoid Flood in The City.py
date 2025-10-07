#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1488

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from sortedcontainers import SortedList

class Solution:
      def avoidFlood(self, rains: List[int]) -> List[int]:
            # Output list: 1 is default, -1 for rainy days, lake number for dried lakes
            res = [1] * len(rains)

            # Tracks indices of sunny (drying) days
            sunny = SortedList()

            # Tracks which day each lake was last rained on
            last_rain = {}

            for day, lake in enumerate(rains):
                  if lake == 0:
                        # This day is sunny, usable for drying a lake
                        sunny.add(day)
                  else:
                        # It's a rainy day, mark with -1
                        res[day] = -1
                        if lake in last_rain:
                              # Lake is already full — must dry it before this day
                              prev_rain = last_rain[lake]
                              idx = sunny.bisect(prev_rain)
                              if idx == len(sunny):
                                    # No suitable sunny day to dry before this rain, flooding occurs
                                    return []

                              # Use the earliest sunny day after previous rain to dry lake
                              dry_day = sunny[idx]
                              res[dry_day] = lake
                              sunny.discard(dry_day)

                        # Record current day as last rain for this lake
                        last_rain[lake] = day

            # Return the constructed output as per problem rules
            return res
