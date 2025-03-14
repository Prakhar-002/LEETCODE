#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2226

# ? ⌚ Time complexity ➺ O(n log(m)) 👉🏻  n = len(candies)

# ? 🧺 Space complexity ➺ O(1)       👉🏻  m = sum(candies) / k

from typing import List

class Solution:
      def maximumCandies(self, candies: List[int], k: int) -> int:
            totalCandies = sum(candies)  # Calculate the total number of candies

            # If there aren't enough candies for every child to get at least 1, return 0
            if totalCandies < k:
                  return 0

            # Binary search boundaries (minimum 1, maximum possible candies per child)
            l, r = 1, totalCandies // k 
            maxCandies = 0  # Store the maximum candies each child can get

            while l <= r:
                  m = (l + r) // 2  # Find the middle value (potential max candies per child)
                  divideCandy = 0  # Counter for total children we can serve

                  # Try to distribute `m` candies to each child
                  for candy in candies:
                        if candy >= m:
                              divideCandy += candy // m  # Number of children served from this pile

                        # Early stop if we already have enough for all `k` children
                        if divideCandy >= k:
                              break

                  # If we can serve at least `k` children, increase `m`
                  if divideCandy >= k:
                        maxCandies = m  # Store this valid `m`
                        l = m + 1  # Try to find a higher valid value
                  else:
                        r = m - 1  # Reduce `m` if we can't serve enough children

            return maxCandies  # Return the maximum candies per child
