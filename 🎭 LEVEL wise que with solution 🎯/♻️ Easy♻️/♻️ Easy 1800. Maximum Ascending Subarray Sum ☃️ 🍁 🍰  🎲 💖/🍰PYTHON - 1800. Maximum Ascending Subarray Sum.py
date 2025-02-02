#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1800

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def maxAscendingSum(self, nums: List[int]) -> int:
            # Initialize maxSum to store the maximum ascending sum
            maxSum = nums[0]  
            # curSum stores the sum of the current ascending subarray
            curSum = nums[0]  

            # Iterate through the list starting from index 1
            for i in range(1, len(nums)):
                  # Check if the current element is greater than the previous one (strictly increasing)
                  if nums[i - 1] < nums[i]:  
                        curSum += nums[i]  # Add the current element to curSum
                  else:
                        maxSum = max(maxSum, curSum)  # Update maxSum if curSum is greater
                        curSum = nums[i]  # Start a new subarray sum with current element

            return max(maxSum, curSum)  # Return the maximum found sum