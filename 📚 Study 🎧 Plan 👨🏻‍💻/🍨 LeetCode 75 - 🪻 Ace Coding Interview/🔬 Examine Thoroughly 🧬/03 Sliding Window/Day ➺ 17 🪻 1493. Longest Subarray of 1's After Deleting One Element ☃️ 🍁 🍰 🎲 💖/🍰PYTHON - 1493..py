#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1493

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestSubarray(self, nums: List[int]) -> int:
            # Initialize the left pointer of the sliding window
            l = 0

            # Count of zeros in the current window (since one zero can be deleted)
            curDlt = 0

            # Maximum length of subarray containing all 1s after deleting one element
            longestOne = 0

            # Iterate through the array using the right pointer
            for r in range(len(nums)):
                  # Increment the zero count if the current number is 0
                  curDlt += 1 if nums[r] == 0 else 0

                  # If the number of zeros exceeds 1 (more than one deletion required), shrink the window
                  while curDlt > 1:
                        # Decrement the zero count if the left number is 0
                        curDlt -= 1 if nums[l] == 0 else 0
                        # Move the left pointer to the right
                        l += 1

                  # Update the maximum length of the valid window
                  longestOne = max(longestOne, r - l + 1)

            # Subtract 1 from the result to account for the one deletion allowed
            return longestOne - 1
