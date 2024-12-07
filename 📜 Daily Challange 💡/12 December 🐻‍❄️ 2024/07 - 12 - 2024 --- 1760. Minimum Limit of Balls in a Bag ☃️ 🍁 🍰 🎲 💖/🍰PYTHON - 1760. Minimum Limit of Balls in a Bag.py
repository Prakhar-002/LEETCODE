#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1760

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

import math

class Solution:
      def can_divide(self, nums, max_bolls, maxOperations):
            # Initialize the count of operations needed
            operation = 0

            # Iterate through each number in the list
            for n in nums:
                  # Calculate the number of operations required to divide 'n' into parts
                  # such that each part is less than or equal to 'max_bolls'
                  operation += math.ceil(n / max_bolls) - 1

                  # If the number of operations exceeds the allowed maximum, return False
                  if operation > maxOperations:
                        return False

            # If the loop completes without exceeding maxOperations, return True
            return True

      def minimumSize(self, nums: List[int], maxOperations: int) -> int:
            # Define the search space: left bound is 1, right bound is the maximum in nums
            l, r = 1, max(nums)

            # Perform binary search to find the minimum possible maximum ball size
            while l < r:
                  # Calculate the middle value of the current search space
                  m = l + ((r - l) // 2)

                  # Check if it's possible to divide the balls with the current max size 'm'
                  if self.can_divide(nums, m, maxOperations):
                        # If yes, reduce the right bound to search for smaller sizes
                        r = m
                  else:
                        # If no, increase the left bound to search for larger sizes
                        l = m + 1

            # The left bound now points to the minimum possible maximum ball size
            return l
