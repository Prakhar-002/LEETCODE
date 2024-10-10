#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 962

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(n)

class Solution:
      def maxWidthRamp(self, nums: List[int]) -> int:
            # length of the input list and stores it in variable `n`
            n = len(nums)
            # `rightMax` with size `n` and initializes all elements to `0`
            # to store the maximum value encountered so far
            rightMax = [0] * n
            # pointer `idx` to start at the last element of the list (`n - 1`)
            idx = n - 1
            # `prev_max` to keep track of the maximum value seen in ith place
            prev_max = 0

            # iterates over the input list in the reverse order
            for num in reversed(nums):
                  #  updates the `rightMax` list with the max value encountered
                  rightMax[idx] = max(num, prev_max)
                  # update `prev_max` with prev max
                  prev_max = rightMax[idx]
                  # increment the i pointer
                  idx -= 1

            # initializes `ramp_width` to keep track of the maximum ramp width
            ramp_width = 0
            # sets `left` index to zero
            left = 0

            # iterates through the indices from `0` to `n-1`
            for right in range(n):
                  #  incrementing the `left` pointer until the value at 
                  # `nums[left]` is no longer greater than `rightMax[right]`
                  while nums[left] > rightMax[right]:
                        # inc the left pointer
                        left += 1

                  # calculates the width of the ramp by subtracting the 
                  # `left` index from the `right` index and maximize it
                  ramp_width = max(right - left, ramp_width)

            # returns the maximum ramp width found during the entire process
            return ramp_width