#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2779

#? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maximumBeauty(self, nums: List[int], k: int) -> int:
            # Sort the array to handle elements in non-decreasing order
            nums.sort()

            # Variable to keep track of the maximum length of valid subarray
            beautyArrLen = 0

            # Left pointer of the sliding window
            l = 0

            # Iterate with the right pointer through the array
            for r in range(len(nums)):
                  # If the difference between nums[r] and nums[l] exceeds 2 * k,
                  # increment the left pointer to reduce the range
                  while nums[r] - nums[l] > 2 * k:
                        l += 1

                  # Update the maximum length of the valid subarray
                  beautyArrLen = max(beautyArrLen, r - l + 1)

            return beautyArrLen
