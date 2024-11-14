#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2064

#? ⌚ Time complexity ➺ O(q * log(max(quantities))) 👉🏻  n = len(quantities)

#? 🧺 Space complexity ➺ O(1)

import math

class Solution:
      def minimizedMaximum(self, n: int, quantities: List[int]) -> int:
            # Helper function to check if we can distribute items with a max of 'x' items per store
            def can_distribute(x):
                  stores = 0
                  for q in quantities:
                        # Calculate required stores for each item quantity with max 'x' per store
                        stores += math.ceil(q / x)
                  return stores <= n

            # Set binary search boundaries
            l, r = 1, max(quantities)
            max_x = 0

            while l <= r:
                  x = l + (r - l) // 2

                  # If distribution is possible with 'x', try smaller values
                  if can_distribute(x):
                        max_x = x
                        r = x - 1
                  else:
                        # Otherwise, try larger values
                        l = x + 1

            return max_x
