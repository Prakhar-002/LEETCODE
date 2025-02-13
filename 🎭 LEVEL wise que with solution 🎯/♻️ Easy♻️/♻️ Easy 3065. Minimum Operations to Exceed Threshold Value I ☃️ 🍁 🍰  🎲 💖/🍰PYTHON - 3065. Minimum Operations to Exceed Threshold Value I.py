#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3065

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minOperations(self, nums, k):
            operation = 0  # Counter for operations

            # Iterate through the array
            for n in nums:
                  if n < k:  # If the number is less than k, increase the operation count
                        operation += 1

            return operation  # Return the total count of elements less than k
