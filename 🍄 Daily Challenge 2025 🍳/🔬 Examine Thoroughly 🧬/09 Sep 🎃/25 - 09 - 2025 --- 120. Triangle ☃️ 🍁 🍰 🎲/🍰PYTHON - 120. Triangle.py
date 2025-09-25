#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 120

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def minimumTotal(self, triangle: list[list[int]]) -> int:
            # Initialize a DP array with zeros, length one more than number of rows
            dp = [0] * (len(triangle) + 1)

            # Iterate from the last row up to the first
            for tri in triangle[::-1]:
                  # Update DP for each element: value plus minimum of two adjacent values from below
                  for i, n in enumerate(tri):
                        dp[i] = n + min(dp[i], dp[i + 1])

            # The top of the triangle now contains the minimum path sum
            return dp[0]
