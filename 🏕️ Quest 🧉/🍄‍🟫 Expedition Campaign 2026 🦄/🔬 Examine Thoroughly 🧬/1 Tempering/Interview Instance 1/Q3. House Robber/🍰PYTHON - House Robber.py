#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.2 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)  

class Solution:
      def rob(self, nums: List[int]) -> int:
            # robOne = max money we can get up to house i-2
            # robTwo = max money we can get up to house i-1
            robOne = 0
            robTwo = 0

            # Process each house one by one
            for n in nums:
                  # At current house:
                  #   Option 1: Skip current house → max is robTwo
                  #   Option 2: Rob current house → n + robOne (since we can't rob adjacent)
                  # So, new max = max(robTwo, n + robOne)
                  temp = robTwo
                  robTwo = max(robTwo, n + robOne)
                  robOne = temp

            # After processing all houses, robTwo holds the max money
            return robTwo
