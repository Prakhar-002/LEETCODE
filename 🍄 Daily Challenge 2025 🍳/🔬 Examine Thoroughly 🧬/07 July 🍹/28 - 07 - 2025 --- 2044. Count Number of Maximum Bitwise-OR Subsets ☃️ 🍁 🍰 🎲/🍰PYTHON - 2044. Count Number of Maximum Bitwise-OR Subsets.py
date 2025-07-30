#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2044

#? ⌚ Time complexity ➺ O(n * Max) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(2 ^ 17)

class Solution:
      def countMaxOrSubsets(self, nums: List[int]) -> int:
            # Initialize the variable to store the maximum OR value
            max_or_value = 0

            # Create a DP array to store the count of subsets resulting in each OR value
            # Size is 2^17 because the maximum number from nums can be up to 10^5 (~17 bits)
            dp = [0] * (1 << 17)

            # There's one subset (the empty subset) with OR value 0
            dp[0] = 1

            # Iterate through each number in the input list
            for num in nums:
                  # Traverse OR values in reverse to prevent overwriting values
                  for i in range(max_or_value, -1, -1):
                        # For each existing subset with OR value i,
                        # create a new subset that includes the current number `num`,
                        # and increase the count of subsets with OR value (i | num)
                        dp[i | num] += dp[i]

                  # Update the overall max OR value so we can iterate efficiently
                  max_or_value |= num

            # Return the number of subsets that have the maximum OR value
            return dp[max_or_value]
