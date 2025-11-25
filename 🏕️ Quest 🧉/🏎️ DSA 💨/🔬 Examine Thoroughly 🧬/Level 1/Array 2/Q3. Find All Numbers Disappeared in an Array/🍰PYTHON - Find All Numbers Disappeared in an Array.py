
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 448

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
            # Initialize the result list to store missing numbers
            res = []

            # Iterate over the input array to mark the presence of numbers
            for n in nums:
                  # Compute the index corresponding to the absolute value of the number
                  i = abs(n) - 1
                  # If the number at the computed index is positive, mark it as negative
                  if nums[i] > 0:
                        nums[i] = nums[i] * (-1)

            # Iterate over the modified array to find missing numbers
            for i, n in enumerate(nums):
                  # If a number is positive, its index + 1 is missing in the input
                  if n > 0:
                        res.append(i + 1)

            # Return the list of missing numbers
            return res
