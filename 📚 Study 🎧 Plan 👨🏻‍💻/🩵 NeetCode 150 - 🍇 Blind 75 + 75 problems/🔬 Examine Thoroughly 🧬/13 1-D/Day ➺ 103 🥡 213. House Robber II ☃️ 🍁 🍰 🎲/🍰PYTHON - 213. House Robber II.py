#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 213

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def rob(self, nums: List[int]) -> int:
            # Edge case: Only one house, rob it!
            if len(nums) == 1:
                  return nums[0]

            # Main idea: You can't rob both the first and last house (circle).
            # Option 1: Rob houses from index 1 to the end (skip first house).
            # Option 2: Rob houses from the start to second last (skip last house).
            # The single house case is already handled.
            # Take the max among these two scenarios.
            return max(self.robber(nums[1:]), self.robber(nums[:-1]))

      def robber(self, nums):
            # Helper for the standard House Robber (linear array of houses)
            rob1, rob2 = 0, 0

            # For each house amount:
            for n in nums:
                  # rob2: Max money by either (previous max rob) or (current house plus rob1)
                  rob1, rob2 = rob2, max(rob1 + n, rob2)

            # Return the max money rob-able from these houses
            return rob2
