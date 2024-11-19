#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2461

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(k)

from collections import defaultdict

class Solution:
      def maximumSubarraySum(self, nums: List[int], k: int) -> int:
            # Initialize the result variable to store the maximum subarray sum
            subArraySum = 0
            # Dictionary to keep track of the frequency of elements in the current subarray
            countNum = defaultdict(int)
            # Variable to store the current subarray sum
            cur_sum = 0

            # Initialize the left pointer of the sliding window
            l = 0

            # Iterate over the array using the right pointer
            for r in range(len(nums)):
                  # Add the current number to the current subarray sum
                  cur_sum += nums[r]
                  # Increment the frequency count for the current number
                  countNum[nums[r]] += 1

                  # If the size of the current window exceeds `k`
                  if r - l + 1 > k:
                        # Reduce the frequency of the leftmost element in the window
                        countNum[nums[l]] -= 1
                        # If the frequency of the leftmost element becomes zero, remove it from the dictionary
                        if countNum[nums[l]] == 0:
                              countNum.pop(nums[l])
                        # Subtract the value of the leftmost element from the current sum
                        cur_sum -= nums[l]
                        # Move the left pointer to the right
                        l += 1

                  # Check if the current window has `k` distinct elements
                  if len(countNum) == r - l + 1 == k:
                        # Update the result with the maximum sum found so far
                        subArraySum = max(subArraySum, cur_sum)

            # Return the maximum subarray sum with `k` distinct elements
            return subArraySum
