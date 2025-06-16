#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2016

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def maximumDifference(self, nums: List[int]) -> int:
            ans = -1            # Initialize the result as -1 (default if no valid difference is found)
            pre_min = nums[0]   # Start with the first element as the minimum so far

            # Loop through the list starting from the second element
            for i in range(1, len(nums)):
                  if nums[i] > pre_min:
                        # If the current element is greater than the previous minimum
                        # update the answer with the maximum difference found so far
                        ans = max(ans, nums[i] - pre_min)
                  else:
                        # If current element is less than or equal to pre_min, update pre_min
                        pre_min = nums[i]

            return ans           # Return the maximum difference found, or -1 if none
