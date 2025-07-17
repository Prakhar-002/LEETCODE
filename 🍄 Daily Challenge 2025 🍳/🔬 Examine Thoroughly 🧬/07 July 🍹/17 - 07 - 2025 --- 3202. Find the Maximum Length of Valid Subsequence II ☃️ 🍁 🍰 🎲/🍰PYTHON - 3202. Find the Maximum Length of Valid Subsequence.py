#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3202

#? ⌚ Time complexity ➺ O(k^2 + n * k) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(k ^ 2)

class Solution: 
      def maximumLength(self, nums: List[int], k: int) -> int:
            # Initialize a 2D dp array of size k x k with all values 0
            dp = [[0] * k for _ in range(k)]

            # Variable to store the result (maximum length)
            res = 0

            # Iterate through each number in the array
            for num in nums:
                  num %= k  # Take modulo k of current number to focus on remainder values

                  # Try all possible previous mod values
                  for prev in range(k):
                        # Update dp for alternating mod values:
                        # If last mod was 'prev' and current is 'num',
                        # then we extend the alternating pattern by using dp[num][prev]
                        dp[prev][num] = dp[num][prev] + 1

                        # Update the global maximum result
                        res = max(res, dp[prev][num])

            # Return the final result
            return res
