#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1004

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestOnes(self, nums: List[int], k: int) -> int:
            # Initialize the left pointer of the sliding window
            l = 0

            # Keep track of the current count of zeros in the window
            curZero = 0

            # Store the length of the longest subarray with at most k zeros
            consecutiveOne = 0

            # Iterate through the array using the right pointer
            for r in range(len(nums)):
                  # Increment curZero if the current element is 0
                  curZero += 1 if nums[r] == 0 else 0

                  # If the count of zeros exceeds k, shrink the window from the left
                  while curZero > k:
                        # Decrement curZero if the element at the left pointer is 0
                        curZero -= 1 if nums[l] == 0 else 0
                        # Move the left pointer to the right
                        l += 1

                  # Update the maximum length of the subarray
                  consecutiveOne = max(consecutiveOne, r - l + 1)

            # Return the result
            return consecutiveOne
