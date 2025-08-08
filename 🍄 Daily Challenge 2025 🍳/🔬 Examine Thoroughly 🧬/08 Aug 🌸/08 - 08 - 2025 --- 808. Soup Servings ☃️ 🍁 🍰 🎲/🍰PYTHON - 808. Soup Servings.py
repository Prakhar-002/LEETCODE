#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 808

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def soupServings(self, n: int) -> float:
            # If n is very large (greater than 4800), the answer converges to 1.0
            # This is based on problem constraints and empirical analysis
            if n > 4800:
                  return 1.0

            # Convert 'n' to units of 25 ml servings
            m = ceil(n / 25)

            # Create a memoization dictionary to store already computed results
            dp = collections.defaultdict(dict)

            # Helper function to recursively calculate the probability
            def calculate_dp(i: int, j: int) -> float:
                  # If both soups finish at the same time
                  if i <= 0 and j <= 0:
                        return 0.5
                  # If soup A is finished first
                  if i <= 0:
                        return 1.0
                  # If soup B is finished first
                  if j <= 0:
                        return 0.0
                  # If the result is already calculated, return it
                  if i in dp and j in dp[i]:
                        return dp[i][j]

                  # Recursive calculation using the 4 serving operations:
                  # Serve: (100, 0), (75, 25), (50, 50), (25, 75)
                  dp[i][j] = (
                        calculate_dp(i - 4, j) +         # 100 ml from A, 0 from B
                        calculate_dp(i - 3, j - 1) +     # 75 from A, 25 from B
                        calculate_dp(i - 2, j - 2) +     # 50 from each
                        calculate_dp(i - 1, j - 3)       # 25 from A, 75 from B
                  ) / 4.0                                # Take the average

                  return dp[i][j]

            # Optimization: if the probability becomes very close to 1,
            # we can return early
            for k in range(1, m + 1):
                  if calculate_dp(k, k) > 1 - 1e-5:
                        return 1.0

            # Final result with full recursion
            return calculate_dp(m, m)
