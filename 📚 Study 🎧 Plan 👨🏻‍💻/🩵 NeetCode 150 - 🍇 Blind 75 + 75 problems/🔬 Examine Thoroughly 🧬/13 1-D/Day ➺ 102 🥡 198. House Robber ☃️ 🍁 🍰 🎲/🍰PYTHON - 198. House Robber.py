#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 198

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def rob(self, nums: List[int]) -> int:
            robOne, roBTwo = 0, 0

            # ? [firstSum, secSum, n, n + 1 ...] 
            for n in nums:
                  robOne, roBTwo = roBTwo, max(roBTwo, n + robOne)

            return max(robOne, roBTwo)