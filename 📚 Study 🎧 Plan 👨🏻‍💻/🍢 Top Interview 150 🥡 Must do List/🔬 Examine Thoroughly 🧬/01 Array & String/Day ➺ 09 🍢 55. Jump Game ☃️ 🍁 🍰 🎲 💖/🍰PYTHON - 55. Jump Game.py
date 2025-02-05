#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 55

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List  # Import List from typing module

class Solution:
      def canJump(self, nums: List[int]) -> bool:
            jump = 0  # Maximum reachable index

            # Iterate through each index
            for i in range(len(nums)):
                  # If the current index is beyond the maximum reachable index, return False
                  if i > jump:
                        return False
                  
                  # Update the maximum reachable index
                  jump = max(jump, i + nums[i])

            # If we can iterate through all elements, reaching the last index is possible
            return True
