#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2929

# ? ⌚ Time complexity ➺ O(n) 

# ? 🧺 Space complexity ➺ O(1)

class Solution:
      def distributeCandies(self, n: int, limit: int) -> int:
            ways = 0         # Initialize number of valid ways to distribute candies

            # Iterate over the number of candies given to the first child (let's say child A)
            for i in range(min(limit, n) + 1):     # i can range from 0 to min(n, limit)

                  # Remaining candies after giving i to child A is (n - i)
                  # To be distributed between child B and C

                  if n - i > 2 * limit:      # If the remaining is more than the max B + C can get, skip
                        continue

                  # The total remaining candies is (n - i), and we now calculate
                  # the number of valid (B, C) pairs such that:
                  #     0 <= B <= limit
                  #     0 <= C <= limit
                  #     B + C = n - i

                  # The minimum possible value for B (or C) in valid (B, C) is:
                  min_val = max(0, n - i - limit)     # If C takes at most `limit`, then B must take at least this

                  # The maximum possible value for B is:
                  max_val = min(n - i, limit)         # B can't exceed limit and can't exceed remaining

                  # The number of valid (B, C) combinations for this fixed A = i:
                  ways += max_val - min_val + 1

            return ways       # Return the total number of valid distributions
