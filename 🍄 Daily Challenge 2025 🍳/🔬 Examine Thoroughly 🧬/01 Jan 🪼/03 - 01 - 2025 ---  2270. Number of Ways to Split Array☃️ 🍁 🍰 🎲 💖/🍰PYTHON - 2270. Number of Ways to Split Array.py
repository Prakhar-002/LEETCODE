#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2770

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def waysToSplitArray(self, nums: List[int]) -> int:
            # Calculate the total sum of the array, which will serve as the initial right sum
            right_sum = sum(nums)

            # Initialize a counter for the number of valid splits
            splits = 0

            # Initialize the left sum as 0, as no elements are included in the left part initially
            left_sum = 0

            # Iterate through the array up to the second-to-last element
            # (as the last element cannot form a split)
            for i in range(len(nums) - 1):
                  # Add the current element to the left sum
                  left_sum += nums[i]

                  # Subtract the current element from the right sum
                  right_sum -= nums[i]

                  # Check if the left sum is greater than or equal to the right sum
                  if left_sum >= right_sum:
                        # If the condition is met, increment the split counter
                        splits += 1

            # Return the total number of valid splits
            return splits
