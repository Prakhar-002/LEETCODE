#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3194

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def minOperations(self, nums: List[int]) -> int:
            minOps = 0  # Stores the count of operations needed to make the array valid

            # Iterate over the array up to the third last element
            for i in range(len(nums) - 2):
                  # If nums[i] is 0, we need to flip it along with the next two elements
                  if nums[i] == 0:
                        minOps += 1  # Increment operation count
                        nums[i] = 1  # Flip nums[i]
                        nums[i + 1] = 1 - nums[i + 1]  # Toggle nums[i+1]
                        nums[i + 2] = 1 - nums[i + 2]  # Toggle nums[i+2]

            # Check if the last two elements are both 1; otherwise, return -1
            if nums[-1] == 0 or nums[-2] == 0:
                  return -1  # Impossible to convert array to desired state

            return minOps  # Return the minimum number of operations performed
